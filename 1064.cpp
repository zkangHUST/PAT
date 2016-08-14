#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<queue>
#define MAX 1001
using namespace std;
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}node;
node* creat(node a[],int n);
int m=1;
void InOrderSet(node* s,int num[],int* i);
void InOrderVisit(node* s);
void levelTravel(node* root);
int comp(const void* a,const void* b);
int main()
{
	node a[MAX];
	int num[MAX];
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	qsort(&num[1],n,sizeof(int),comp);
	creat(a,n);
	InOrderSet(&a[1],num,&m);
	//levelTravel(&a[1]);
	for(i=1;i<=n;i++)	//没有必要层序遍历，按数组下标打印即可
	{
		cout<<a[i].data;
		if(i<n)
			cout<<' ';
	}
	return 0;
}
node* creat(node a[],int n)
{
	int i=1;
	if(n%2==0)
	{
		while((i*2+1)<=n)
		{
			a[i].left = &a[i*2];
			a[i].right = &a[i*2+1];
			i++;
		}
		a[i].left=&a[i*2];
		a[i].right=NULL;
		i++;
		while(i<=n)
		{
			a[i].left = NULL;
			a[i].right = NULL;
			i++;
		}
	}
	else
	{
                while((i*2)<=n)
                {
                        a[i].left = &a[i*2];
                        a[i].right = &a[i*2+1];
                        i++;
                }
                while(i<=n)
                {
                        a[i].left = NULL;
                        a[i].right = NULL;
                        i++;
                }

	}
	return &a[1];
}
void InOrderSet(node* s,int num[],int* i)
{

    if(s==NULL)
        return;
    else
        {
            InOrderSet(s->left,num,&m);
            s->data = num[m++];
	    InOrderSet(s->right,num,&m);
        }  
}
void InOrderVisit(node* s)
{

    if(s==NULL)
        return;
    else
        {
            InOrderVisit(s->left);
            printf("%d ",s->data);
	    InOrderVisit(s->right);
        }  
}
void levelTravel(node* root)
{
	queue<node> s;
	s.push(*root);
	node p;
	while(!s.empty())
	{
		p = s.front();
		s.pop();
		cout<<p.data;
		if(p.left!=NULL)
			s.push(*(p.left));
		if(p.right!=NULL)
			s.push(*(p.right));
		if(!s.empty())
			cout<<' ';//避免在行末添加空格
			
	}	
}
int comp(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}

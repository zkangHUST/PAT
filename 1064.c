#include<cstdio>
#include<vector>
#define MAX 1001
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}node;
node* creat(node a[],int n);
/*void InOrderVisit(node* s,int num[]);*/
int m=1;
void InOrderSet(node* s,int num[],int* i);
void InOrderVisit(node* s);
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
	creat(a,n);
	InOrderSet(&a[1],num,&m);
	InOrderVisit(&a[1]);
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
            //cout<<node->data<<' ';
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
            printf("%d ",s->data);//cout<<node->data<<' ';
            //s->data = num[(*i)++];
	    InOrderVisit(s->right);
        }  
}

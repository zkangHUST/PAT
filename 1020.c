#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
struct ListNode
{
	int data;
	struct ListNode* left;
	struct ListNode* right;
};
typedef struct ListNode node;
struct queue
{
    node n[1000];
    node* s;
    node* e;
};
node* create(int post[],int postStart,int postEnd,int in[],int inStart,int inEnd);
node* pop(struct queue* a);
void push(struct queue* a,node* b);
void layerprint(node* r,int n);
int post[MAX],in[MAX], ans[MAX];
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&post[i]);
	}
        for(i=0;i<n;i++)
        {
                scanf("%d",&in[i]);
        }
	node* r = create(post,0,n-1,in,0,n-1);
	layerprint(r,n);
	return 0;
}
node* create(int post[],int postStart,int postEnd,int in[],int inStart,int inEnd)
{
	if(postStart>postEnd)
		return NULL;
	else if(inStart>inEnd)
		return NULL;
	node* r = (node*)malloc(sizeof(node));
	r->data = post[postEnd];
	int i;
	for(i=inEnd;i>=inStart;i--)
	{
		if(in[i]==post[postEnd])
			break;
	}
	int len = inEnd - i;
	r->right = create(post,postEnd-len,postEnd-1,in,i+1,inEnd);
	r->left  = create(post,postStart,postEnd-len-1,in,inStart,i-1);
	return r;
}
void layerprint(node* r,int n)
{
    struct queue q1;        //创建队列
    q1.s=&q1.n[0];       //初始化队列
    q1.e=&q1.n[0];
    node* p;     //临时结点指针
    int count =0;
    push(&q1,r);              //根节点入队
    while(q1.e!=q1.s)       //判断队列是否为空
    {
        p = pop(&q1);           //出队
        printf("%d",p->data);      //访问结点
        count++;
        if(count!=n)
                putchar(' ');
        if(p->left !=NULL)
            push(&q1,p->left);        //左儿子入队
        if(p->right!=NULL)
            push(&q1,p->right);       //右儿子入队
    }
}
node* pop(struct queue* a)
{
    node *tmp=(node*)malloc(sizeof(node));
    *tmp = *a->s;
    a->s++;
    return tmp;
}
void push(struct queue* a,node* b)
{
    *a->e=*b;
    a->e++;
}


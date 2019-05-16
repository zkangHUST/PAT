#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct
{
	int data;
	int left;
	int right;
}node;
typedef struct
{
	node value[MAX];
	int top;
	int bom;
}queue;
void initQueue(queue* s);
void push(queue* s,node tmp);
node pop(queue* s);
void layerPrint(node a[],int len);
int isEmptyQueue(queue*s);
int num[MAX];
int k=0;
int comp(const void* a,const void* b);
void inOrderVisit(node*p,int* num);
node a[MAX];
int main()
{	
	int num[MAX];
	int n,i;
	int cnt;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i].left,&a[i].right);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	qsort(num,n,sizeof(int),comp);
      	inOrderVisit(&a[0],num);
	layerPrint(a,n);
	return 0;
}
void inOrderVisit(node*p,int* num)		//中序遍历填充节点值
{
	
	if(p->left!=-1)
		inOrderVisit(&a[p->left],num);
	p->data = num[k++];
	if(p->right!=-1)
		inOrderVisit(&a[p->right],num);
	return ;
}
void layerPrint(node a[],int len)		//层序遍历打印节点值
{
	int count=0;
	queue q;
	node p;
	initQueue(&q);
	push(&q,a[0]);
	while(q.top!=q.bom)
	{
		p = pop(&q);
		printf("%d",p.data);
		count++;
		if(count!=len)
			putchar(' ');
		if(p.left!=-1)	
			push(&q,a[p.left]);
		if(p.right!=-1)
			push(&q,a[p.right]);
	}
}
int comp(const void* a,const void* b)
{
	return *(int*)a -*(int*)b;
}
//队列的相关操作
void initQueue(queue* s)
{
	s->top = 0;
	s->bom = 0;
}
void push(queue* s,node tmp)
{
	s->value[s->top]=tmp;
	s->top++;
}
node pop(queue* s)
{
	node tmp ;
	tmp = s->value[s->bom];
	s->bom++;
	return tmp;
}
int isEmptyQueue(queue*s)
{
	if(s->top==s->bom)
		return 1;
	return 0;
}

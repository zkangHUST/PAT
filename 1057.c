#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100001
const char* PUSH ="Push";
char command[15];
typedef struct 
{
	int data[MAX];
	int top;
}stack;
int pop(stack* s);
int comp(const void* a,const void* b);
int PeekMedian(stack s);
void push(stack* s,int n);
void initStack(stack* s);
int isEmpty(stack* s);
int main()
{
	stack s;
	initStack(&s);
	int key,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",command);
		if(strcmp(command,PUSH)==0)
		{
			scanf("%d",&key);
			push(&s,key);
		}
		else if(strcmp(command,"Pop")==0)
		{
			if(isEmpty(&s))
				printf("Invalid\n");
			else
				printf("%d\n",pop(&s));
		}
		else if(strcmp(command,"PeekMedian")==0)
		{
			if(isEmpty(&s))
				printf("Invalid\n");
			else
				printf("%d\n",PeekMedian(s));
		}
	}
	return 0;
}
int pop(stack* s)
{
	s->top--;
	return s->data[s->top];
}
void push(stack* s,int n)
{
	s->data[s->top]=n;
	s->top++;
}
void initStack(stack* s)
{
	s->top = 0;
}
int isEmpty(stack* s)
{
	if(s->top==0)
		return 1;
	return 0;
}
int PeekMedian(stack s)
{
	qsort(s.data,s.top,sizeof(int),comp);
	//int i=0,key = s.data[0];
	//{
	//	if()	
	//}
	if(s.top%2==0)
		return s.data[s.top/2-1];
	else
		return s.data[s.top/2];
}
int comp(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}

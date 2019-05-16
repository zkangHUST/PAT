#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
node* init(node* a,int n);
int main()
{
	int n;
	cin>>n;
	node* l=(node*)malloc(sizeof(node));
	l=init(l,n);
	node* p =l;
	p=l;
	int count = 0;
	while(p->next!=p)
	{
		count++;
		if(count==2)
			{
				node* temp;
				temp = p->next;
				p->next=p->next->next;
				free(temp);
				count = 0;
			}
		p=p->next;	
	}
	cout<<p->data;
	return 0;
}
node* init(node* a,int n)
{
	a->next = NULL;
	a->data= 1;
	node* p=a;
	if(n==1)
	{	a->next=a;
	return a;}
	int i = 2;
	node* s;
	while(i<=n)
		{
			
			s= (node*)malloc(sizeof(node));
			s->data = i;			
			s->next=NULL;
			p->next=s;
			p=p->next;	
			i++;		
		}
	s->next = a;	
	return a;
}	

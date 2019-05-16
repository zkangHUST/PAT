#include<stdio.h>
#include<string.h>
typedef struct
{
	char c[5];
	int id;
}card; 
char set[][5]={"\0","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13","H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13","C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13","D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13","J1","J2"};
card c[55];//={"\0","S1"};
int comp(void* a,void *b);
int main()
{
	int num[100];
	int i=1,n, tmp;
	for(i=1;i<=54;i++)
	{
		strcpy(c[i].c,set[i]);
		c[i].id = i;
	}
	scanf("%d",&n);
	i=1;
	scanf("%d",&num[i]);
		i++;
	while((tmp=getchar())!='\n')
	{
		scanf("%d",&num[i++]);
	}
	int count = i,j;
	for(i=0;i<n;i++)
	{
		for(j=1;j<count;j++)
		{
			c[j].id = num[j];
		}
		qsort(c+1,54,sizeof(card),comp);
	}
//	qsort(c+1,54,sizeof(card),comp);
	for(i=1;i<=54;i++)
	{
		printf("%s",c[i].c);
		if(i!=54)
			putchar(' ');
	}
	return 0;
}
int comp(void* a,void *b)
{
	card *m = (card*)a;
	card *n = (card*)b;
	return m->id-n->id;
}

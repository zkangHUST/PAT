#include<stdio.h>
#define MAX 100000
int coupons[MAX],value[MAX];
int comp(void* a,void* b);
int main()
{
	int m,n,i;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&coupons[i]);
	scanf("%d",&n);
        for(i=0;i<n;i++)
                scanf("%d",&value[i]);
	qsort(coupons,m,sizeof(int),comp);
	qsort(value,n,sizeof(int),comp);
	int *p=&coupons[0];
	int *q=&value[0];
	long long sum = 0;
	long long tmp = 0;
	while((p<=&coupons[m-1])&&(q<=&value[n-1]))
	{
		if((tmp=(*p)*(*q))>0)
		{
			sum = sum +tmp;
			p++;
			q++;
		}
		else if(*p<0)
		{
			q++;
		}
		else if(*q<0)
		{
			p++;
		}
	}
	printf("%d",sum);
	return 0;
}
int comp(void* a,void* b)
{
	int* m=(int*)a;
	int* n=(int*)b;
	if(*m<0&&*n<0)
		return *m -*n;
	else
		return *n - *m;
}

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
	int p=m-1,q=n-1;
	long long sum = 0;
	while(coupons[p]>0&&value[q]>0)
	{
		sum += coupons[p]*value[q];
		p--;
		q--;
	}
	p=0,q=0;
	while(coupons[p]<0&&value[q]<0)
	{
		sum += coupons[p]*value[q];
		p++;
		q++;
	}	
	printf("%d",sum);
	return 0;
}
int comp(void* a,void* b)
{
	int* m=(int*)a;
	int* n=(int*)b;
	return *m -*n;
}

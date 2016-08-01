#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
int comp(void* a,void* b);
int main()
{
	int n,i,j,amount,value[MAX];
	scanf("%d%d",&n,&amount);
	for(i=0;i<n;i++)
		scanf("%d",&value[i]);
	qsort(value,n,sizeof(int),comp);
	int sum;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			sum = value[i]+value[j];
			if(sum == amount)
			{
				printf("%d %d",value[i],value[j]);
				return 0;
			}
		}
	printf("No Solution");
	return 0;
}
int comp(void* a,void* b)
{
	int* m = (int*)a;
	int* n = (int*)b;
	return *m-*n;
}

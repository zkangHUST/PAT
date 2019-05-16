#include<stdio.h>
#define MAX 100001
int a[MAX];
int main()
{
	int i, n,sum;
	scanf("%d%d",&n,&sum);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		value(i,n,v,a);
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(v[i][j]==sum)
				printf("%d-%d\n",i,j);
		}
	}
	
	return 0;
}
int  value(int i,int j,int v[][100],int* a)
{
	if(j<i)
		return 0;
	else if(i==j)
		v[i][j]=a[i];
	else
	{
		v[i][j]=value(i,j-1,v,a)+a[j];
	}
	return v[i][j];
}

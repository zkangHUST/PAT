#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 10001
int b[MAX];
int a[10001][10001]={0};
void fill(int m,int n);
int comp(const void* a,const void* b);
int main()
{	
	int i, N,n,m;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=sqrt(N);i++){
		if(N%i==0){
			n=i;
		}
	}
	m=N/n;
	qsort(b,N,sizeof(int),comp);
	fill(m,n);
	int j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{	
			printf("%d",a[i][j]);
			if(j!=n)
				putchar(' ');
		}
		putchar('\n');
	}
	

	return 0;
}
void fill(int m,int n)
{
	int i,j;
	int k=0;
	for(i=1;i<=n/2;i++)
	{
		for(j=i;j<=n-i;j++)
			a[i][j] = b[k++];
		for(j=i;j<=m-i;j++)
			a[j][n-i+1]=b[k++];
		for(j=n-i+1;j>i;j--)
			a[m-i+1][j]=b[k++];
		for(j=m-i+1;j>i;j--)
			a[j][i]=b[k++];
	}
	if(n%2==1)
	{
		for(i=((n/2)+1);i<=m-(n/2);i++)
			a[i][(n/2)+1]=b[k++];
	}
}
int comp(const void* a,const  void* b)
{
	return	*(int*)b-*(int*)a;
}

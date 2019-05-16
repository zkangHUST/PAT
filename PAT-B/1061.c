#include<stdio.h>
#define MAX 105
int value[MAX];
int ans0[MAX];
int ans[MAX][MAX]={0};
int main()
{
	int n,m,i=0,j=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
		scanf("%d",&value[i]);
	for(i=0;i<m;i++)
		scanf("%d",&ans0[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			scanf("%d",&ans[i][j]);
		}
	for(i=0;i<n;i++)
	{
		printf("%d\n",score(ans[i],m));
	}
	return 0;
}
int score(int* ans,int len)
{
	int i=0,sum = 0;
	for(i=0;i<len;i++)
	{
		sum += value[i]*!(ans[i]^ans0[i]);
	}
	return sum;
}


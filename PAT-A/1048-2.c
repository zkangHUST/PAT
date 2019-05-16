#include<stdio.h>
#define MAX 100001
int coins[MAX]={0};
int main()
{
	int N,M,value;
	scanf("%d%d",&N,&M);
	int i=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&value);
		coins[value]++;
	}
	int tmp;
	for(i=1;i<=M/2;i++)
	{
		if(coins[i]>0)
		{
			coins[i]--;
			tmp = M-i;
			if(coins[tmp]>0)
			{
				printf("%d %d",i,tmp);
				return 0;
			}	
		}
	}
	printf("No Solution");
	return 0;
}


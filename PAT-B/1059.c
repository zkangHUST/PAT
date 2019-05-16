#include<stdio.h>
#include<math.h>
#define MAX 10000
int isPrime(int n);
int rank[MAX];
int flag[MAX];
int main()
{
	int n,k,i=1,ID;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&ID);
		rank[ID]=i;
		i++;
	}
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&ID);
		if(flag[ID]==0)
		{
			if(rank[ID]==1)
			{
				 printf("%04d: Mystery Award\n",ID);
			}
			else if(rank[ID]==0)
			{
				printf("%04d: Are you kidding?\n",ID);
			}
			else if(isPrime(rank[ID]))
			{
				 printf("%04d: Minion\n",ID);

			}
			else
			{
				 printf("%04d: Chocolate\n",ID);
			}
			if(rank[ID]!=0)
				flag[ID]=1;
		}
		else
		{
			printf("%04d: Checked\n",ID);
		}
		
	}
	return 0;
}
int isPrime(int n)
{
	int i;
	if(n<2)
		return 0;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				return 0;
		}
	}
	return 1;
}

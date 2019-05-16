#include<stdio.h>
#include<math.h>
long long count[100000000]={0};
int main()
{
	long long n,i;
	scanf("%lld",&n);
	long long m=n;
	for(i=2;i<=sqrt(m);i++)
	{
		if(n==0)
			break;
		else if(n%i==0)
		{
			n=n/i;
			count[i]++;
			i--;
					
		}
	}
	for(i=2;i<=m;i++)
	{
		if(count[i]==0)
			;
		else if(count[i]==1)
		{
			printf("%lld*",i);
		}
		else
		{
			printf("%lld-%lld",i,count[i]);
		}
	}
	return 0;	
}

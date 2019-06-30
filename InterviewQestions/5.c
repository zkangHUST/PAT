#include<stdio.h>
#include<math.h>
int isPrime(int n);
int main()
{
	int n;
	int i=2,j=n-i;
	int count = 0;
	scanf("%d",&n);
	while(i<=j)
	{
		if(isPrime(i)&&isPrime(j))
			count++;
		i++;
		j=n-i;
	}
	printf("%d",count);
}
int isPrime(int n)
{
	int i;
	if(n<2)
		return 0;
	else if(n==2||n==3)
		return 1;
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

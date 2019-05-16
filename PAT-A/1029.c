#include<stdio.h>
#define MAX 1000000
long a[MAX];
long b[MAX];
int main()
{
	long long m,n,i;
	scanf("%lld",&m);
	for(i=0;i<m;i++)
		scanf("%lld",&a[i]);
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&b[i]);
	long long sum = (m+n+1)/2,count = 0;
	long *p=&a[0],*q=&b[0],*s;
	while(p<=&a[m-1]&&q<=&b[n-1])
	{
		if(*p<*q)
		{
			count++;
			s=p;
			p++;
		}
		else
		{
			count++;
			s=q;
			q++;
		}
		if(count==sum)
		{
			printf("%ld",*s);
			return 0;
		}
		
	}
	if(count<sum)
	{
		while(p<=&a[m-1])
		{
			count++;
			s=p;
			p++;
			if(count == sum)
			{
				printf("%ld",*s);
				return 0;
			}
		}
		while(q<=&b[n-1])
		{
			count++;
			s=q;
			q++;	
			if(count==sum)
			{
				printf("%ld",*s);
				return 0;
			}
		}
	}
	return 1;
}

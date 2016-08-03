#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isPalindromic(char ans[],long long n);
long long transfer(char ans[]);
char ans[100];
int main()
{
	long long n;
	int k;
	scanf("%lld%d",&n,&k);
	int i;
	for(i=0;i<k;i++)
	{
		if(isPalindromic(ans,n))
		{
			printf("%lld\n",n);
			printf("%d",i);
			break;
		}
		else
		{
			n+=transfer(ans);
		}	
	}
	if(i==k)
	{
		printf("%lld\n",n);
		printf("%d",k);
	}
	return 0;
}
long long transfer(char ans[])
{
	long long sum = 0;
	int len = strlen(ans),i;
	for(i=0;i<len;i++)
		sum = sum *10 + ans[i]-'0';
	return sum;	
}
int isPalindromic(char ans[],long long n)
{
	memset(ans,'\0',100);
	if(n==0)
	{
		ans[0]='0';
		return 1;
	}
	int i=0;
	while(n)
	{
		ans[i++]=n%10+'0';
		n=n/10;
	}
	int len= strlen(ans),j;
	i=0;
	j=len -1;
	while(i<j)
	{
		if(ans[i]!=ans[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}




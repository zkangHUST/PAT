#include<stdio.h>
#include<string.h>
int isPalindromic(int ans[],int n,int b);
int ans[32];
int main()
{
	int n,b,i;
	for(i=0;i<32;i++)
		ans[i]=-1;
	scanf("%d%d",&n,&b);
	if(isPalindromic(ans,n,b))
	{
		printf("Yes\n");
	}
	else
		printf("No\n");	
	for(i=31;i>=0;i--)
	{
		if(ans[i]==-1)
			;
		else
		{
			printf("%d",ans[i]);
			if(i!=0)
				putchar(' ');
		}
	}
	return 0;
}
int isPalindromic(int ans[],int n,int b)//基底可能很大，不能用char来保存
{
	int i=0;
	if(n==0)
	{
		ans[0]=0;
		return 1;
	}
	while(n)
	{
		ans[i++]=n%b;
		n=n/b;
	}
	int j=i-1;
	i=0;
	while(i<j)
	{
		if(ans[i]!=ans[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}

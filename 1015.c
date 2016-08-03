#include<stdio.h>
#include<math.h>
#include<string.h>
int convert(int n,int d);
int isPrime(int n);
int main()
{
	int N,D;
	int ans;
	while(1)
	{
		scanf("%d",&N);
		if(N<0)
			break;
		scanf("%d",&D);
		ans= convert(N,D);
		if(isPrime(N)&&isPrime(ans))
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	//	printf("%d %d",N,convert(N,D));
	//	return 0;
	}
}
int convert(int n,int d)
{
	char ans[100]={0};
	int  i=0;
	while(n)
	{
		ans[i++]=n%d+'0';
		n=n/d;
	}
	ans[i]='\0';
	int sum = 0;
	int len = strlen(ans);
	for(i=0;i<len;i++)
	{
		sum = sum*d+(ans[i]-'0');
	}
	return sum;
}
int isPrime(int n)
{
	if(n<2)
		return 0;
	int i=2;
	for(i=2;i<=sqrt(n);i++){
		if((n%i)==0)
			return 0;
	}
	return 1;
}

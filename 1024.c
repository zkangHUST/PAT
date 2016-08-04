#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char n[202]={0};
int isPalindromic(char ans[]);
void  transfer(char n[],char ans[]);
void  transfer(char n[],char ans[]);
void add(char n[],char ans[]);
char ans[202];
int main()
{
	//long long n;
	int k;
	scanf("%s %d",n,&k);
	int i;
	for(i=0;i<k;i++)
	{
		if(isPalindromic(n))
		{
			printf("%s\n",n);
		//	printf("%lld\n",n);
			printf("%d",i);
			break;
		}
		else
		{
			//n+=transfer(ans);
			transfer(n,ans);
			add(n,ans);
		}	
	}
	if(i==k)
	{
		printf("%s\n",n);
		printf("%d",k);
	}
	return 0;
}
void  transfer(char n[],char ans[])
{
	int i,len = strlen(n),j=0;
	for(i=len-1;i>=0;i--)
	{
		ans[j++]=n[i];
	}
	ans[j]='\0';

//	long long sum = 0;
//	int len = strlen(ans),i;
//	for(i=0;i<len;i++)
//		sum = sum *10 + ans[i]-'0';
	//return sum;	
}
int isPalindromic(char ans[])
{
	/*memset(ans,'\0',100);
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
	}*/
	int len= strlen(ans),j;
	int i=0;
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
void add(char n[],char ans[])
{
	char tmp[200]={0};
	int len = strlen(n);
	int i=len-1,j=0;
	int flag=0;
	int sum = 0;
	for(i=len-1;i>=0;i--)
	{
		sum = (n[i]-'0'+ans[i]-'0')+flag;
		tmp[j++]=sum%10+'0';
		flag = sum/10;
	}
	if(flag)
		tmp[j]=flag +'0';
	len = strlen(tmp);
	memset(n,'\0',202);
	j=0;
	for(i=len-1;i>=0;i--)
	{
		n[j++]=tmp[i];
	}
}


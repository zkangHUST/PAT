#include<stdio.h>
#define MAX 1001
int modify(char a[],int flag[],int i);
int main()
{
	int n,i,flag[MAX]={0};
	char name[MAX][11];
	char password[MAX][11];
	int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",name[i],password[i]);
	}
	for(i=0;i<n;i++)
	{
		//modify(name[i],flag,i);
		count+=modify(password[i],flag,i);
	}
	if(count==0)
	{	
		if(n>1)
			printf("There are %d accounts and no account is modified",n);
		else
			printf("There is 1 account and no account is modified");
	}
	else
	{
		printf("%d\n",count);
		for(i=0;i<n;i++)
		{
			if(flag[i]==1)
			printf("%s %s\n",name[i],password[i]);
		}
	}
			
		
	
	return 0;
}
int  modify(char a[],int flag[],int i)
{
	char *p=a;
	while(*p!='\0')
	{
		switch (*p)
		{
			case '1':{*p='@',flag[i]=1;}break;
			case '0':{*p='%',flag[i]=1;}break;
			case 'l':{*p='L',flag[i]=1;}break;
			case 'O':{*p='o',flag[i]=1;}break;
			default:break;
		}
		p++;		
	}
	if(flag[i]==1)
		return 1;
	else
		return 0;
}

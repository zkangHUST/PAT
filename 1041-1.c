#include<stdio.h>
#define MAX 100000
int a[MAX];
int pass[MAX]={-1};
int checked(int* pass,int count,int s);
int check(int m,int n,int s);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int unique = -1;
	int count = 0;
	for(i=0;i<n;i++)
	{
		/*if(checked(pass,count,a[i]))
			;*/
		if(check(0,i-1,a[i]))
		{
			if(check(i+1,n-1,a[i]))
			{
				unique = a[i];
				printf("%d",unique);
				break;
			}
			else
			//	pass[count++]=a[i];
		}
	}
	if(unique==-1)
		printf("None");
	return 0;
}
int check(int m,int n,int s)
{
	if(n<m)
		return 1;
	int j;
	for(j=m;j<=n;j++)
	{
		if(s==a[j])
			return 0;
	}
	return 1;
}
int checked(int* pass,int count,int s)
{
	int i=0;
	for(i=0;i<count;i++)
	{
		if(s==pass[i])
			return 1;
	}
	return 0;
}

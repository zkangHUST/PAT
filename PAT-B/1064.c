#include<stdio.h>
#define MAX 37
int check(int m);
int cnt[MAX];最大数不超过10000，其各位数字之和小于等于36
int main()
{
	int n,i=0,j=0,count=0,temp;
	int ans[40]={0};
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&temp);
		cnt[check(temp)]++;
	}
	for(i=0;i<MAX;i++)
	{
		if(cnt[i]!=0)
		{
			count++;
			ans[j]=i;
			j++;
		}
	}
	printf("%d\n",count);
	for(i=0;i<j-1;i++)
	{
		printf("%d ",ans[i]);
	}
	printf("%d",ans[j-1]);
	return 0;
}
int check(int m)
{
	int sum=0;	
	while(m)
	{
		sum +=m%10;
		m/=10;
	}
	return sum;	
}

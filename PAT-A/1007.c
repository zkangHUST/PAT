#include<stdio.h>
#define MAX 10000
int main()
{
	int num[MAX];
	int value[MAX]={0};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	value[0] = num[0];
	int start[MAX]= {0};
	int end = 0;
	int max = value[0];
	start[0];
	for(i=1;i<n;i++)
	{
		if(value[i-1]>0)
		{
			value[i] = value[i-1]+num[i];
			start[i] = start[i-1];
		}
		else
		{
			value[i] = num[i];
			start[i] = i;
		}
		if(max<value[i])
		{
			max = value[i];
			end = i;
		}
	}
	if(max<0)
		printf("0 %d %d",num[0],num[n-1]);
	else
		printf("%d %d %d",max,num[start[end]],num[end]);
	return 0;
}

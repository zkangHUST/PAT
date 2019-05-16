#include<stdio.h>
#define MAX 10
int num[MAX];
int count[100]={0};
int sum = 0;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i!=j)
				count[num[i]*10+num[j]]++;
		}
	for(i=0;i<100;i++)
	{
		if(count[i]==1)
			sum+=i;
	}
	printf("%d\n",sum);
	return 0;
}

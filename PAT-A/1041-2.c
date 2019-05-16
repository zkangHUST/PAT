#include<stdio.h>
#define MAX 100000
int a[MAX];
int b[10001]={0};
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;	
	}
	for(i=0;i<n;i++)
	{
		if(b[a[i]]==1)
		{
			printf("%d",a[i]);
			return 0;
		}
	}
	printf("None");
	return 0;	
}

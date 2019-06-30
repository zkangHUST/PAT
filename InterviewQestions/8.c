#include<stdio.h>
int getMax(int a[],int len);
int a[100];
int main()
{
	int p,i=0;
	int n;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",getMax(a,n));

	return 0;
}
int getMax(int a[],int len)
{
	int max = 0;
	int min=a[0];
	int i;
	for(i=1;i<len;i++)
	{
		if((a[i]-min)>max)
			max = a[i] -min;
		if(a[i]<min)
			min=a[i];
	}
	return max;
}

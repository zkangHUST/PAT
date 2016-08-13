#include<stdio.h>
#include<math.h>
#define EPSION 0.1
double a[1001]={0};
//int b[11]={0};
int main()
{
	int k;
	scanf("%d",&k);
	int i;
	double c;
	int e;
	for(i=0;i<k;i++)
	{
		scanf("%d%lf",&e,&c);
		a[e]=c;		
	}
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%lf",&e,&c);
		a[e]+=c;
	}
	int count = 0;
	for(i=1000;i>=0;i--)
	{
		if(fabs(a[i])>=EPSION)
			count++;//	printf("%.1lf %d ",a[i],i);
	}
	if(count == 0)
	{
		printf("0");
		return 0;
	}
	printf("%d ",count);
	for(i=1000;i>=0;i--)
	{
		if(fabs(a[i])>=EPSION)
		{
			printf("%d %.1f",i,a[i]);
			count--;
			if(count>0)
				putchar(' ');
		}
	}	
	return 0;
}

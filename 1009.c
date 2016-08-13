#include<stdio.h>
#include<math.h>
#define EPSION 0.1
double c[11]={0};
int e[11]={0};
double num[2001]={0};
int main()
{
	int l1,l2;
	scanf("%d",&l1);
	int i;
	double c_0;
	int e_0;
	for(i=0;i<l1;i++)
	{
		scanf("%d%lf",&e[i],&c[i]);
	}
	scanf("%d",&l2);
	int j;
	double cTmp=0;
	int eTmp=0;
	for(i=0;i<l2;i++)
	{
		scanf("%d%lf",&e_0,&c_0);
		for(j=0;j<l1;j++)	
		{
			cTmp=c[j]*c_0;
			eTmp=e[j]+e_0;
			num[eTmp]+=cTmp;
		}
	}
	int count = 0;
	for(i=2000;i>=0;i--)
	{
		if(fabs(num[i])>=EPSION)
			count++;
	}
	if(count == 0)
	{
		printf("0");
		return 0;
	}
	printf("%d ",count);
	for(i=2000;i>=0;i--)
	{
		if(fabs(num[i])>=EPSION)
		{
			printf("%d %.1f",i,num[i]);
			count--;
			if(count>0)
				putchar(' ');
		}
	}	
	return 0;
}

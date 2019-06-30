#include<stdio.h>
int maxsum(int a[],int i,int len);
int price[105]={0};
int main()
{
	int p,i=0;
	while(scanf("%d",&p)==1)
	{
		price[i]=p;
		i++;
	}
	printf("结束输入\n");
	int count =i;
	int sum = 0;
	int tmp =0;
	for(i=2;i<count-2;i++)
	{
		tmp = maxsum(price,i,count);
		if(tmp>sum)
			sum = tmp;
	
	}
	printf("%d",sum);
}
int maxsum(int a[],int i,int len)
{
	int max1,max2,min,k;
	max1 = 0;
	max2=0;
	min= a[0];
	for(k=1;k<i;k++)
	{
		if((a[k]-min)>max1)
			max1=a[k]-min;
		if(a[k]<min)
			min = a[k];
	}
	max2=-100;
	for(k=i+1;k<len;k++)
	{
		if((a[k]-a[i])>max2)
			max2=a[k]-a[i];
	}
	return max1+max2;	
}

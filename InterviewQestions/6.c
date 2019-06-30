#include<stdio.h>
int main()
{
	char encode[10];
	int max=90,min=-90,mid=0;
	int n,count=0;
	scanf("%d",&n);
	while(count<6)
	{
		if(n<mid)
		{
			encode[count]='0';
			max=mid;
			mid=(min+max)/2;
		}
		else
		{
			encode[count]='1';
			min = mid;
			mid= (min+max)/2;
		}
		count++;
	}
	encode[count]='\0';
	printf("%s",encode);
	return 0;
}

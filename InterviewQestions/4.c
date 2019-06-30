#include<stdio.h>
void print(int n);
int main()
{
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
void print(int n)
{
	int count=1;
	int m=1,i=1;
	while(count<=n)
	{
		if(count%2==1)
		{
			for(i=1;i<count;i++)
			{
				printf("%d*",m);
				m++;
			}
			printf("%d\n",m);
		}
		else
		{
			m=m+count;
			for(i=1;i<count;i++)
			{
				printf("%d*",m);
				m--;
			}
			printf("%d\n",m);
			m=m+count;
		}
		count++;
	}
}

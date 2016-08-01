#include<stdio.h>
long long a,b,c,sum;
int main()
{
	int i,T;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		sum = a+b;
		printf("Case #%d: ",i);
		if(a>0&&b>0&&sum<=0)
		{
			printf("true\n");
		}
		else if(a<0&&b<0&&sum>=0)
		{
			printf("false\n");
		}
		else if(sum>c)
		{
			printf("true\n");
		}
		else 
		{
			printf("false\n");
		}
	}
	return 0;
}

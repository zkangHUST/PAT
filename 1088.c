#include<stdio.h>
long long divisor(long long a,long long b);
void print(long long a,long long b);
void add(long long a,long long b,long long c,long long d);
void minus(long long a,long long b,long long c,long long  d);
void division(long long a,long long b,long long c,long long d);
void multiply(long long a,long long b,long long  c,long long d);
int main()
{
	long long a,b,c,d;
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);
	add(a,b,c,d);
	minus(a,b,c,d);
	multiply(a,b,c,d);
	division(a,b,c,d);
	return 0;
}
void add(long long a,long long  b,long long c,long long d)
{
	print(a,b);
	printf(" + ");
	print(c,d);
	printf(" = ");
	print(a*d+b*c,b*d);
	printf("\n");	
}
void minus(long long a,long long b,long long c,long long  d)
{
        print(a,b);
        printf(" - ");
        print(c,d);
        printf(" = ");
        print(a*d-b*c,b*d);
        printf("\n");
	
}
void multiply(long long a,long long b,long long  c,long long d)
{
        print(a,b);
        printf(" * ");
        print(c,d);
        printf(" = ");
        print(a*c,b*d);
        printf("\n");
}
void division(long long a,long long b,long long c,long long d)
{
	long long m= a*d;
	long long n= b*c;
	print(a,b);
        printf(" / ");
        print(c,d);
        printf(" = ");
        if(n==0)
		printf("Inf\n");
	else 
	{
		if(n<0)
		{
			m=m*-1;		//把负号调整到分子上
			n=n*-1;
		}
		print(m,n);
		printf("\n");    
	}
}
void print(long long a,long long b)//打印函数
{
	long long tmp;
	int flag =0;
	if(a==0)
	{
		printf("0");
		return ;
	}
	else if(a<0)//不管分子为正还是为负，统统按照正整数处理
	{
		a= -a;
		flag = 1;//标记为负数
	}
	tmp = divisor(a,b);//求出最大公约数
	a=a/tmp;//化为最简形式
	b=b/tmp;
	long c=a/b;//整数部分
	if(flag)
	{
		if(b==1)	
			printf("(-%lld)",a);
		else if(c>0)	
			printf("(-%lld %lld/%lld)",c,(a%b),b);
		else
			printf("(-%lld/%lld)",a%b,b);
	}
	else
	{
		if(b==1)
			printf("%lld",a);			
                else if(c>0)
                        printf("%lld %lld/%lld",c,a%b,b);
                else
                        printf("%lld/%lld",a%b,b);
	}
}
long long  divisor(long long a,long long b)//辗转相除法求最大公约数
{
	long long max = a>b?a:b;
	long long min =a<b?a:b;
	long long  r=max%min;
	while(r)
	{
		max=min;
		min = r;
		r = max%min;
	}	
	return min;
}

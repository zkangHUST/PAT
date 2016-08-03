#include<stdio.h>
long long ans[2]={0,1};
long long factor(long long a,long long b);
void add(long long ans[],long long a1,long long a2,long long b1,long long b2);
void print(long long a,long long b);
int main()
{
	int n;
	long long a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%lld/%lld",&a,&b);
		add(ans,ans[0],ans[1],a,b);
	}
	print(ans[0],ans[1]);
	return 0;
}
long long factor(long long a,long long b)
{
	if(a<0)
		a=-a;
	if(b<0)
		b=-b;
	long long max=a>b?a:b;
	long long min=a<b?a:b;
	int r=max%min;
	while(r){
		max = min;
		min = r;
		r= max%min;
	}
	return min;
}
void add(long long ans[],long long a1,long long a2,long long b1,long long b2)
{
	ans[0]= a1*b2+a2*b1;
	ans[1]= a2*b2;
	if(ans[0]==0){
		ans[1]=1;
		return;
	}
	long long tmp = factor(ans[0],ans[1]);
	ans[0]=ans[0]/tmp;
	ans[1]=ans[1]/tmp;		
	return ;
}
void print(long long a,long long b)
{
	if(b==0)
		return ;
	if(a==0){
		printf("0");
		return;
	}
	int flag = 0;
	if(a<0){
		flag = 1;
		a=-a;
	}
	long long tmp = factor(a,b),c;
	a=a/tmp;
	b=b/tmp;
	c=a/b;
	if(flag){
		if(b==1)
			printf("-%lld",c);
		else{
			if(c==0)
				printf("-%lld/%lld",a,b);
			else
				printf("-%lld %lld/%lld",c,a%b,b);
		}
	}
	else{
                if(b==1)
                        printf("%lld",c);
                else{
                        if(c==0)
                                printf("%lld/%lld",a,b);
                        else
                                printf("%lld %lld/%lld",c,a%b,b);
		}
	}
}

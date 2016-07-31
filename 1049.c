#include<stdio.h>
#include<math.h>
#include<string.h>
char c[11]={0};
int count_1(int n);
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int sum = count_1(n);
	printf("%d",sum);
	return 0;
}
/*int count_0(int n)
{
	if(n==0)
		return 0;
	else if(n<10)
		return 1;
	char c[11]={0};
	int m =n,i=0;
	while(n!=0)
        {
                c[i]=n%10+'0';
                i++;
                n=n/10;
        }
        int len = strlen(c);
        int tmp =0,sum=0;
        for(i=1;i<len;i++)
        {
                tmp = tmp +pow(10,i-1);
                sum = sum + tmp;
        }
        sum = sum +(m%((int)pow(10,len-1)))+count(m/m%((int)pow(10,len-1)));
	return sum;
}*/
int count_1(int n)
{
	if(n==0)
		return 0;
	else if(n<=9)
		return 1;
	char c[11]={0};
        int m =n,i=0;
        while(n!=0)
        {
                c[i]=n%10+'0';
                i++;
                n=n/10;
        }
        int len = strlen(c);
        int tmp =0,sum=0;
        for(i=1;i<len;i++)
        {
                tmp = tmp +pow(10,i-1);
                sum = sum + tmp;
        }
	int x= m%((int)pow(10,len-1));
	sum = sum +x+1+count_1(x);
	return sum;
}

#include<stdio.h>
#include<string.h>
void int_char(char c[],int a);
char c[10]={0};
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	int_char(c,a);
	if(a<0)
		putchar('-');
	int len = strlen(c);
	int i=len -1;
	for(;i>=0;i--)
		putchar(c[i]);
	return 0;
}
void int_char(char c[],int a)
{
	if(a<0)
		a=-1*a;
	else if(a==0)
		c[0]='0';
	int count = 0;
	int i=0;
	while(a!=0)
	{
		if(count==3)
		{
			c[i]=',';
			i++;
			count = 0;
		}
		c[i]=a%10+'0';
		a=a/10;
		i++;
		count++;
	}
}

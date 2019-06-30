#include<stdio.h>
#include<string.h>
char c[1000];
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int tmp;
	if(n==0)
		putchar('0');
	while(n)
	{
		tmp = n%12;
		if(tmp==10)
			c[i]='A';
		else if(tmp==11)
			c[i]='B';
		else
			c[i]=tmp+'0';
		i++;
		n=n/12;
	}
	c[i]='\0';
	int len= strlen(c);
	for(i=len-1;i>=0;i--)
	{
		putchar(c[i]);
	}
	return 0;
}

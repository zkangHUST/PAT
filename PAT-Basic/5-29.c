#include<stdio.h>
#define MAX 1000
char a[MAX];
char b[MAX];
char c[MAX];
int main()
{
	gets(a);
	gets(b);
	c=a;
	char *m=c,*n=b;
	int i=0;
	while(*p!='\0'&&*q!='\0')
	{
		if(*m!=*n)
		{
			c[i++]=*m;
			m++;
		}
		else
		{
			m++;
			n++;
			if(*n=='\0')
			{
				n=b;
				m=c;
				i=0;
			}
	}

	return 0;
}
int check(char a[],char b[])
{
	char *m=a,*n=b;
	while(*m!='\0'&&*n!='\0')
	{
		if(*m!=*n)
		{
			m++;
		}
		else 
		{
			m++;
			n++;
		}
	}
	if(*n=='\0')
		return 1;
	else 
		return 0;
}


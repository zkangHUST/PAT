#include<stdio.h>
char r[3]={0};
char g[3]={0};
char b[3]={0};
void convert(char* s,int n);
int main()
{
	int red,green,blue;
	scanf("%d%d%d",&red,&green,&blue);
	convert(r,red);
	convert(g,green);
	convert(b,blue);
	printf("#%s%s%s",r,g,b);
	return 0;
}
void convert(char* s,int n)
{
	if(n<13)
	{
		s[0] = '0';
		if(n<10)
			s[1]=n+'0';
		else
			s[1]=n-10+'A';
	}
	else
	{
		if((n%13)<10)
			s[1]=n%13+'0';
		else 
			s[1]=n%13-10+'A';
		if((n/13)<10)
			s[0]=n/13 + '0';
		else
			s[0]=n/13-10+'A';
	}
	s[2]='\0';
}

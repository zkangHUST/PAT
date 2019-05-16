#include<stdio.h>
void left_1(char* str,int length);
void left_n(char*str,int length,int time);
int main()
{
	char str[101];
	int i=0;
	char c;
	while((c=getchar())!='\n')
	{
		str[i]=c;
		i++;
	}
	str[i]='\0';
	int N;
	scanf("%d",&N);
	left_n(str,i,N);
	printf("%s",str); 
	return 0;	
}
void left_1(char* str,int length)
{
	char c= str[0];
	int i=0;
	for(i=0;i<length-1;i++)
	{
		str[i]=str[i+1];
	}
	str[i]=c;
}
void left_n(char*str,int length,int time)
{
	for(int i=0;i<time;i++)
		left_1(str,length);
}

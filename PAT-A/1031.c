#include<stdio.h>
#include<string.h>
#define MAX 10000
char c[MAX]={0};
void space(int n);
int main()
{
	scanf("%s",c);
	int len = strlen(c);
	int n1,n2;
	if((len+2)%3==0){
		n2 = (len+2)/3;
		n1 = ((len+2)-n2)/2;
	}
	else if((len+2)%3==1){
		n2 = (len+2)/3+1;
		n1 = (len+2-n2)/2;
	}
	else{
		n2 = (len+2)/3+2;
		n1 = ((len+2)-n2)/2;
	}
	int i=0,j=len-1;
	while(n1>1){
		putchar(c[i++]);
		space(n2-2);
		putchar(c[j--]);
		putchar('\n');
		n1--;
	}
	for(;i<=j;i++)
		putchar(c[i]);
	return 0;
}
void space(int n)
{
	int i=0;
	for(i=0;i<n;i++)
		putchar(' ');
}

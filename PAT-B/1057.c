#include<stdio.h>
#define MAX 100005
int CountOne(int n);
int CountBit(int n);
char s[MAX];
int main()
{
	int i=0,sum = 0;
	char* p;
	fgets(s,100001,stdin);
	p=s;
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z')
		{
			sum += *p-'A'+1;
		}
		else if(*p>='a'&&*p<='z')
		{
			sum += *p-'a'+1;
		}
		p++;
	}
	printf("%d %d\n",CountBit(sum)-CountOne(sum),CountOne(sum));
	
	return 0;
}
int CountOne(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;    
    }
    return count;
}
int CountBit(int n)
{
	int count=0;
	while(n)
	{
		n/=2;
		count++;
	}
	return count;
}

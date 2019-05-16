#include<stdio.h>
#include<string.h>
char s[31]={0};
int main()
{
    int a,b,d;
    scanf("%d %d %d",&a,&b,&d);
    a=a+b;
    int i =0;
    if(a==0)
    {   putchar('0');
        return 0;
    }
    while(a>0)
    {
        s[i]=a%d+'0';
        a=a/d;
        i++;
    }
    i = strlen(s)-1;
    for(;i>=0;i--)
        putchar(s[i]);
    return 0;
}

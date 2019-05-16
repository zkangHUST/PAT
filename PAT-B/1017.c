#include<stdio.h>
#include<string.h>
char a[1001];
char b;
char q[1001]={'0'};
char r;
int main()
{
    scanf("%s %c",a,&b);
    int len = strlen(a);
    int i=0;
    char tmp;
    for(i=0;i<len;i++)
    {
        tmp = a[i]-'0';
        if(i==0)
        {
            a[i]=tmp%(b-'0')+'0';
            q[i]=tmp/(b-'0')+'0';
        }
        else 
        {
            a[i]=((a[i-1]-'0')*10+tmp)%(b-'0')+'0';
                        q[i]=((a[i-1]-'0')*10+tmp)/(b-'0')+'0';
            a[i-1]='0';     
        }
    }

    q[1000]='\0';
    char *p=q;
    while(*p=='0')
        p++;
    if(*p=='\0')
        putchar('0');
    while(*p!='\0')
    {
        putchar(*p);
        p++;
    }
    putchar(' ');
    p=a;
        while(*p=='0')
                p++;
    if(*p==0)
        putchar('0');
    while(*p!='\0')
        {
                putchar(*p);
                p++;
        }

    return 0;
}

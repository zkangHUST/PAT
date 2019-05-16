#include<stdio.h>
#include<string.h>
int char_int(char s[]);
void printF(int n);
void print0(int count);
char e[100000];
char n[100000]={0};
char zhi[100000]={0};

int main()
{
    scanf("%s",e);
    char flag='\0';
    if(e[0]=='-')
    {
        flag ='-';
    }
    n[0]='0';
    n[1]=e[1];
    char *p=&e[3];
    int i=2;
    while(*p!='E'&&*p!='\0')
    {
        n[i]=*p;
        i++;
        p++;
    }
    p++;
    i=0;
    while(*p!='\0')
    {
        zhi[i]=*p;
        i++;
        p++;    
    }
    int count = char_int(zhi);
    if(flag=='-')
        putchar('-');
    if(count<0)
    {
        printF(count);

        printf("%s",&n[1]);
        return 0;
    }
    int len=strlen(n)-2;
    if(len<=count)
    {
        printf("%s",&n[1]);
        print0(count-len);  
    }
    else
    {
        p=&n[1];
        for(i=1;i<=count+1;i++)
            putchar(n[i]);
        putchar('.');
        p=&n[i];
        while(*p!='\0')
        {
            putchar(*p);
            p++;
        }
    }

    return 0;
}
int char_int(char s[])
{
    int num=0;
    int flag =1;
    if(s[0]=='+')
        flag=1;
    else if(s[0]=='-')
        flag =-1;
    char *p=&s[1];
    while(*p!='\0')
    {
        num = num*10+(*p -'0');
        p++;
    }
    num = flag * num;
    return num;
}
void printF(int n)
{
    if(n<0)
        n=-1*n;
    printf("0.");
    n=n-1;
    while(n>0)
    {
        putchar('0');
        n--;
    }
}
void print0(int count)
{
    while(count--)
        putchar('0');
}

#include<stdio.h>
#define MAX 101
char a[MAX];
char b[MAX];
int count(char a[],char da);
int sum(int count,char da);
int main()
{
    char da,db;
    int suma=0,sumb=0,s=0,countA=0,countB=0;
    scanf("%s %c %s %c",a,&da,b,&db);
    char* p=a;
    countA=count(a,da);
    countB=count(b,db);
    suma=sum(countA,da);
    sumb=sum(countB,db);
    s=suma+sumb;
    printf("%d",s);
    return 0;
}
int count(char a[],char da)
{
    int count=0;
    char* p=a;
        while(*p!='\0')
        {
                if(*p==da)
                        count++;
        p++;
        }
    return count;
}
int sum(int count,char da)
{
    int sum=0;
    while(count--)
    {
        sum = sum*10+da-'0';
    }
    return sum;
}

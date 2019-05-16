#include<stdio.h>
#include<math.h>
void print(int n,char s);
void hourglass(int n,char s);
int main()
{
    int n,i;
    char c;
    scanf("%d %c",&n,&c);
    i = sqrt((n+1)/2);
    hourglass(i,c);  
    printf("%d",n-2*i*i+1);
    return 0;
}
void print(int n,char s)
{
    while(n--)
        putchar(s);
}
void hourglass(int n,char s)
{
    int i;
    for(i=n;i>1;i--)
    {
        print(n-i,' ');
        print(2*i-1,s);
        putchar('\n');
    }
    for(i=1;i<=n;i++)
    {
        print(n-i,' ');
        print(2*i-1,s);
        putchar('\n');
    }    
}

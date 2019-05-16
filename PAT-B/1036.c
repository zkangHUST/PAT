#include<stdio.h>
void print(char c,int n);
int main()
{
    int N;
    char c;
    scanf("%d %c",&N,&c);
    int lie = (N+1)/2-2;
    print(c,N);
    putchar('\n');
    while(lie--)
    {
        print(c,1);
        print(' ',N-2);
        print(c,1);
        putchar('\n');
    }
    print(c,N);
    return 0;
}
void print(char c,int n)
{
    while(n--)
        printf("%c",c);
}

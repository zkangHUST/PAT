#include<stdio.h>
int count[101]={0};
int main()
{
    int N;
    int score;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&score);
        count[score]++; 
    }
    int n;
    int  s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        printf("%d",count[s]);
        if(i<n-1)
            putchar(' ');
    }
    return 0;
}

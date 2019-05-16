#include<stdio.h>
int main()
{
    int N;
    double sum=0;
    double num;
    scanf("%d",&N);
    int i;
    for(i=1;i<=N;i++)
    {
        scanf("%lf",&num);
        sum = sum + num*(N-i+1)*i;
    }
    printf("%.2f",sum);
    return 0;
}

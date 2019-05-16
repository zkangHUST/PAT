#include<stdio.h>
int N;
double e;
int D;
int main()
{
    scanf("%d%lf%d",&N,&e,&D);
    int i=0;
    int num;
    float power;
    int count=0,count_e=0,count_k=0,j=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&num);
        count = 0;
        for(j=0;j<num;j++)
        {
            scanf("%f",&power);
            if(power<e)
                count++;
        }
        if(count>num/2)
        {
            count_e++;
            if(num>D)
                count_k++;
        }

    }   
    float p_e = (float)(count_e-count_k)*100/N;
    float p_k = (float)count_k*100/N;
    printf("%.1f",p_e);putchar('%');
    printf(" %.1f",p_k);putchar('%');
    return 0;
}

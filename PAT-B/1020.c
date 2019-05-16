#include<stdio.h>
#define MAX 1000
void sort(float price[],float money[],float stock[],int len);
float money[MAX];
float price[MAX];
float  stock[MAX];
float sum=0 ;
int main()
{
    int i=0, N,m;
    scanf("%d",&N);
    scanf("%d",&m);
    for(i=0;i<N;i++)
        scanf("%f",&stock[i]);
    for(i=0;i<N;i++)
        scanf("%f",&money[i]);
    for(i=0;i<N;i++)
        price[i]=money[i]/stock[i];
    sort(price,money,stock,N);
    int sum1=0;
    float sum2=0;
    for(i=0;i<N;i++)
    {
        sum1=sum1+stock[i];
        sum2=sum2+money[i];
    }
    if(m>=sum1)
    {
        printf("%.2f",sum2);
        return 0;
    }   
    for(i=0;i<N;i++)
    {
        if(m<=stock[i])
        {
            sum = sum + price[i]*m;
            break;
        }   
        else
        {
            sum =sum + money[i];
            m = m  - stock[i];
        }
    }
printf("%.2f",sum);
    return 0;
}
void sort(float price[],float money[],float stack[],int len)
{
    int i,j;
    float tmp_p;
    float tmp_m;
    int tmp_s;

    for(i=len-1;i>0;i--)    
        for(j=0;j<i;j++)
        {
            if(price[j]<price[j+1])
            {
                tmp_p = price[j];
                price[j]=price[j+1];
                price[j+1]=tmp_p;
                tmp_m = money[j];
                money[j]=money[j+1];
                money[j+1]=tmp_m;
                tmp_s = stack[j];
                stack[j]=stack[j+1];
                stack[j+1]=tmp_s;       
            }
        }
}

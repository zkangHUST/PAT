#include<stdio.h>
#include<algorithm>
#define MAX 1000
using namespace std;
float sum=0 ;
typedef struct
{
        float money;
        float price;
        float stock;
}good;
int comp(good a,good b){
        return a.price>b.price;
}
int main()
{
    good g[MAX];
    int i=0, N,m;
    scanf("%d",&N);
    scanf("%d",&m);
    for(i=0;i<N;i++)
        scanf("%f",&g[i].stock);
    for(i=0;i<N;i++)
        scanf("%f",&g[i].money);
    for(i=0;i<N;i++)
        g[i].price=g[i].money/g[i].stock;
    sort(g,g+N,comp);
    int sum1=0;
    float sum2=0;
    for(i=0;i<N;i++)
    {
        sum1=sum1+g[i].stock;
        sum2=sum2+g[i].money;
    }
    if(m>=sum1)
    {
        printf("%.2f",sum2);
        return 0;
    }
    for(i=0;i<N;i++)
    {
        if(m<=g[i].stock)
        {
            sum = sum + g[i].price*m;
            break;
        }
        else
        {
            sum =sum + g[i].money;
            m = m  - g[i].stock;
        }
    }
    printf("%.2f",sum);
    return 0;
}

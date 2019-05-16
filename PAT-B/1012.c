#include<stdio.h>
int main()
{
    int N,m;
    scanf("%d",&N);
    int i=0,flag = 1;
    int count0=0,count1=0,count2=0,count3=0,count4=0;
    int sum1=0,sum2=0,sum3=0,max=0;
    while(N--)
    {
        scanf("%d",&m);
        if(m%10==0)
        {
            count0++;
            sum1= sum1+m;
        }
        else if(m%5==1)
        {
            count1++;
            if(flag)
            {
                sum2= sum2+m;
                flag = 0;
            }
            else 
            {
                sum2= sum2-m;
                flag = 1;
            }       
        }
        else if(m%5==2)
        {
            count2++;
        }
        else if(m%5==3)
        {
            count3++;
            sum3=sum3+m;
        }
        else if(m%5==4)
        {
            count4++;
            if(max<m)
                max = m;
        }
    }
    float ave = (float)sum3/count3;
    if(count0==0)
        printf("N ");
    else 
        printf("%d ",sum1);
    if(count1==0)
        printf("N ");
    else 
        printf("%d ",sum2);
    if(count2==0)
        printf("N ");
    else 
        printf("%d ",count2);
    if(count3==0)
        printf("N ");
    else 
        printf("%.1f ",ave);
    if(count4==0)
        printf("N");
    else 
        printf("%d",max);
    return 0;
}

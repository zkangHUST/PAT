#include<stdio.h>
int price[3]={0};
int b[3]={0};
int main()
{
    scanf("%d.%d.%d",&price[0],&price[1],&price[2]);
    scanf("%d.%d.%d",&b[0],&b[1],&b[2]);
    int i=0,sum = 0;
    for(;i<3;i++)
    {
        b[i]=b[i]-price[i];

    }   
    sum =b[0]*17*29+b[1]*29+b[2];
    int flag = 0;
    if(sum <0)
    {
        flag = 1;
        sum = -1*sum;
    }
    b[2]=sum%29;
    b[1]=(sum/29)%17;
    b[0]=sum/29/17; 
    if(flag==1)
        b[0]=-1*b[0];
    printf("%d.%d.%d",b[0],b[1],b[2]);
    return 0;
}

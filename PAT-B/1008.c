#include<stdio.h>
#define MAX 100
void reverse(int a[],int s,int e);
void shift(int a[],int len,int i); 
int  main()
{
    int num[MAX];
    int n,i=0;
    scanf("%d",&n);
    int j;
    scanf("%d",&j); 
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    shift(num,n,j);
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d",num[i]);
        else
                    printf("%d ",num[i]);
    }

    return 0;
}
void reverse(int a[],int s,int e)
{
    int tmp;
    for(;s<e;s++,e--)
    {
        tmp = a[s];
        a[s]=a[e];
        a[e]=tmp;       
    }
}
void shift(int a[],int len,int i)
{
    i=i%len;
    reverse(a,0,len-1-i);
    reverse(a,len-i,len-1);
    reverse(a,0,len-1); 
}

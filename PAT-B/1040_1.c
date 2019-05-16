#include<stdio.h>
int countP[100000]={0};
int countT[100000]={0};
int main()
{
    char c;
    int i=0;
    int t=0;
    while((c=getchar())!='\n')
    {
        if(c=='P')
            countP[i]++;
        else if(c=='A')
            i++;
        else if(c=='T')
        {
            countT[i]++;t++;
        }
    }
    int j=0,count=0;
    int p=countP[0];
    t-=countT[0];
    for(j=1;j<=i;j++)
    {
        count = (count+p*t)%1000000007;
        p+=countP[j];
        t-=countT[j];
    }
    printf("%d",count);
    return 0;
}

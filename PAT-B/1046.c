#include<stdio.h>
int main()
{
    int jia_0,jia_1,yi_0,yi_1;
    int N;
    int count_jia=0;
    int count_yi=0;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%d%d%d",&jia_0,&jia_1,&yi_0,&yi_1);
        if((jia_1==(jia_0+yi_0))&&(yi_1!=(jia_0+yi_0)))
        {count_jia++;}
        else if((yi_1==(jia_0+yi_0))&&(jia_1!=(jia_0+yi_0)))
        {count_yi++;}
    }
printf("%d %d",count_yi,count_jia);
return 0;
}

#include<stdio.h>
char id[20];
int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char Z[]={'1','0','X','9','8','7','6','5','4','3','2'};
int main()
{
    int N,i=0;
    scanf("%d",&N);
    int flag=1;
    for(;i<N;i++)
    {
        scanf("%s",id);
        if(isNum_17(id)==0)
        {
            printf("%s\n",id);
            flag = 0;   
        }
        else
        {
            if(checkSum_right(id)==0)
            {
                printf("%s\n",id);
                flag = 0;
            }
        }
    }
    if(flag)
        printf("All passed");
    return 0;
}
int isNum_17(char a[])
{
    int i=0;
    for(;i<17;i++)
    {
        if((a[i]<'0')||(a[i]>'9'))
            return 0;
    }
    return 1;       
}
int checkSum_right(char a[])
{
    int sum=0;
    int i=0;
    for(;i<17;i++)
        sum = sum + (a[i]-'0')*weight[i];
    int z=sum%11;

    if(a[17]==Z[z])
        return 1;
    else 
        return 0;
}

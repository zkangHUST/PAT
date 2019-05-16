#include<stdio.h>
char num[1001];
int n[10];
int main()
{
    scanf("%s",num);
    int i;
    for(i=0;i<10;i++)
        n[i]=0;
    for(i=0;num[i]!='\0';i++)
    {
        n[num[i]-'0']++;
    }
    for(i=0;i<10;i++)
    {
        if(n[i]!=0)
            printf("%d:%d\n",i,n[i]);
    }
    return 0;

}

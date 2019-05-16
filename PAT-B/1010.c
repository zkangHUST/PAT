#include<stdio.h>
#define MAX 100
int main()
{
    int num[MAX];
    int i = 0;
    char c='a';
    while(c!='\n')
    {
        scanf("%d",&num[i]);
        i++;
        c=getchar();
    }
    int n=i-2;
	for(i=0;i<=n;i+=2)
	{
        	num[i]=num[i]*num[i+1];
        	num[i+1]=num[i+1]-1;
        	if(num[i]==0)
        	    num[i+1]=0;
    	}
        while(n>=0)
        {
                if(num[n]!=0)
                        break;
                else
                        n-=2;
        }
        if(n<0)
        {
                printf("0 0");
                return 0;
        }

    for(i=0;i<=n;i+=2)
    {
        if(num[i]!=0)
        {
            if(i<n)
            {
                printf("%d ",num[i]);   
                printf("%d ",num[i+1]);
            }
            else
            {
                printf("%d ",num[i]);
                printf("%d",num[i+1]);
            }
        }
    }
    return 0;   
}

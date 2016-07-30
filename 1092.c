#include<stdio.h>
int count[128]={0};
char c[1001]={0};
char w[1001]={0};
int main()
{
    scanf("%s",c);
    scanf("%s",w);
    char *p = c;
    while(*p!='\0')
    {
        count[*p]++;
        p++;
    }
    p=w;
    while(*p!='\0')
    {
        count[*p]--;
        p++; 
    }
    int i=0, m=0,n=0;
    for(i=0;i<128;i++)
    {
        if(count[i]<0)
            m+=count[i];
        else
            n+=count[i];
    }
    if(m<0)
    {
        m=-1*m;
        printf("No %d",m);
    }
    else
        printf("Yes %d",n);
    return 0;
}


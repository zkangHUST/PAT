#include<stdio.h>
int count[128]={0};
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    char *p=s;
    while(*p!='\n')
    {
        if(*p>='A'&&*p<='Z')
        {
            count[*p-'A'+'a']++;
        }
        else if(*p>='a'&&*p<='z')
            count[*p]++;    
        p++;
    }
    int i=0,max = 0,k=0;
    for(;i<128;i++)
    {
        if(count[i]>max)
        {
            max = count[i];
            k = i;
        }
    }
    putchar(k);
    printf(" %d",max);

    return 0;
}

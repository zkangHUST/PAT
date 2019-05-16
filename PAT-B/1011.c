#include<stdio.h>
int main()
{
    long long a,b,c;
    int N;
    scanf("%d",&N);
    int i=1;
    while(i<=N)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a+b)>c)
        {
            printf("Case #%d: true",i);
            if(i<N)
                putchar('\n');
        }
        else
        {   
            printf("Case #%d: false",i);
            if(i<N)
                putchar('\n');
        }

        i++;
    }
return 0;
}

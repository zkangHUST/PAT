#include<stdio.h>
#include<math.h>
long long  Prime(int n);
long long PrimeNext(long long m);
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    int i;
    long long tmp=Prime(M);
    for(i=M;i<=N;i++)
    {    
    if(i==N)
        {
            printf("%lld",tmp);
  }       
        else if((i-M+1)%10==0)
            printf("%lld\n",tmp);
        else 
             printf("%lld ",tmp);

        tmp = PrimeNext(tmp);
    }
    return 0;
}
long long PrimeNext(long long m)
{
    m=m+1;
    long long i;
        for(i=2;i<=sqrt(m);i++)
        {
            if(m%i==0)
            {
                m++;    
                i=1;
            }
        }
    return m;
}
long long Prime(int n)
{
    if(n==1)
                return 2;
        int m=3;
    int count =1;
        long long i;
    long long p;
        while(count<n)
    {
            for(i=2;i<=sqrt(m);i++)
                {
                        if(m%i==0)
                        {
                                m++;
                                i=1;
                        }
                }
                p=m;
            m++;
        count++;
    }
    return p;
}

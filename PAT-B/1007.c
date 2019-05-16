#include<stdio.h>
#include<math.h>
int isprime(int n);
int main()
{
    int i, N;
    scanf("%d",&N);
    int m=2,diff = 0,count =0;
    for(i=3;i<=N;i+=2){      //偶数显然不是素数，不必判断，所以i+=2
        if(isprime(i)){
            diff = i-m;
            if(diff==2)
                count++;    
            m=i;            
        }
    }
    printf("%d",count);
    return 0;
}
int isprime(int n)
{
    if(n<2)
        return 0;
    int i=2;
    for(;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

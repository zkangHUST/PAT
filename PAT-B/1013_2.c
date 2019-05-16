#include<stdio.h>
#include<math.h>
int isprime(int n);
int main()
{
        int m,n,count=1;
        scanf("%d%d",&m,&n);
        int i=2,cnt=0;
        if(m==1){
                printf("%d",i);
                cnt=1;
                if(m<n)
                        putchar(' ');
        }
        for(i=3;;i+=2){
                if(isprime(i)){
                        count++;
                        if(count>=m&&count<n){
                                if(cnt<9){
                                        printf("%d ",i);
                                        cnt++;
                                }
                                else{
                                        printf("%d\n",i);
                                        cnt = 0;
                                }
                        }
                        else if(count==n)
                                printf("%d",i);
                        else if(count>n)
                                break;
                }
        }
        return 0;
}
int isprime(int n)
{
        int i=2;
        if(n<2)
                return 0;
        else{
                for(i=2;i<=sqrt(n);i++){
                        if(n%i==0)
                                return 0;
                }
        }
        return 1;
}

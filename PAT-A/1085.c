#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
long long num[MAX];
void sort(long long n[],int len);
void quicksort(long long r[],int start,int end);
int comp(const void* a,const void* b)
{
    if(*(long long*)a<*(long long*)b)   return -1;
    if(*(long long*)a==*(long long*)b)      return 0;
    if(*(long long*)a>*(long long*)b)       return 1;
}
int main()
{
    int N,i,j;
    long long p;
    long long sum ;
    long long m;
    int max = 0;
    int count=0;
    scanf("%d%lld",&N,&p);
    for(i=0;i<N;i++)
        scanf("%lld",&num[i]);
    qsort(num,N,sizeof(long long),comp);
    for(i=0;i<N;i++)
    {
        sum = num[i]*p;
        for(j=i+count;j<N;j++)
        {
            if(num[j]<=sum)
            {
                count =j-i+1;
            }
            else
                break;
        }
        if(count > max)
            max = count;
    }
    printf("%d",max);
    return 0;
}
void sort(long long n[],int len)
{
    int i,j;
    long long tmp;
    for(i=len-1;i>0;i--)
        for(j=0;j<i;j++)
        {
            if(n[j]>n[j+1])
            {
                tmp = n[j];
                n[j]=n[j+1];
                n[j+1]=tmp;
            }
        }   
}
void quicksort(long long r[],int start,int end)
{
    int i=start;
    int j=end;  
    long long temp=r[start];
    if(i<j)
    {
        while(i!=j)
        {
            while(i<j&&r[j]>=temp)
                j--;        
            if(i<j)
            {

                r[i]=r[j];
                i++;
            }       
            while(i<j&&r[i]<temp)
                i++;        
            if(i<j)
            {
                r[j]=r[i];
                j--;
            }   
        }   
        r[i]=temp;  
        quicksort(r,start,i-1);
        quicksort(r,i+1,end);
    }           
}

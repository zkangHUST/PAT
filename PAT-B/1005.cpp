#include<cstdio>
#include<algorithm>
#define MAX 100
using namespace std;
void del(int a[],int i,int n);
int comp(int a,int b);//比较函数，用于sort()的递减排序
void fun(int a[],int i,int n);
int main()
{
    int i=0, n,count=0,num[MAX];
    scanf("%d",&n);
    for(;i<n;i++)
        scanf("%d",&num[i]);
    i = 0;
    for(;i<n;i++){
        if(num[i]>0)
            fun(num,num[i],n);
    }
    sort(num,num+n,comp);//递减排序
    i=0;
    for(;i<n&&num[i]!=-1;i++){
        if(i<n-1&&num[i+1]==-1)
            printf("%d",num[i]);
        else if(i==n-1)
            printf("%d",num[i]);
        else
            printf("%d ",num[i]);
    }
    return 0;
}
void fun(int a[],int i,int n)
{
    while(1!=i){
        if(i%2==0){
            i=i/2;
            del(a,i,n);
        }
        else{
            i=(3*i+1)/2;
            del(a,i,n);
        }
    }
}
void del(int a[],int i,int n)
{
    int j=0;
    for(;j<n;j++){
        if(a[j]==i){
            a[j]=-1;
        }
    }
}
int comp(int a,int b)
{
        return a>b;
}

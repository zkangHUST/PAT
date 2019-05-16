#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void* b)
{
    return *(int*)a -*(int*)b;
}
int a[100000]={0};
int b[100000]={0};
int c[100000]={0};
int main()
{
    int N;
    scanf("%d",&N);
    int i=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    qsort(a,N,sizeof(int),comp);
    int max = 0;int count = 0;
    for(i=0;i<N;i++)
    {
        if(b[i]>max)
            max = b[i];
        if(a[i]==b[i]&&a[i]==max)
        {
            c[count++]=b[i];            
        }
    }
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {
        if(i==0)
        printf("%d",c[i]);
        else 
            printf(" %d",c[i]);
    }
    putchar('\n');
    return 0;
}

int sum[100001]={0};
int max = 0;
int main()
{
    int N,i,k;
    int id,score;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d%d",&id,&score);
        sum[id]+=score;
    }
    for(i=1;i<=N;i++)
    {
        if(max<sum[i])
        {
            max =sum[i];
            k=i;
        }
    }
    printf("%d %d",k,sum[k]);

    return 0;
}

#include<stdio.h>
#define MAX 10001
int sum[MAX]={0};
int main()
{
    int N;
    int max=0;
    int team,id,score;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d-%d %d",&team,&id,&score);
        sum[team]+=score;
    }
    int i=0;
    int team_id = 0;
    for(i=1;i<=10000;i++)
    {
        if(sum[i]>max)
        {
            max = sum[i];
            team_id = i;
        }
    }
    printf("%d %d",team_id,max);

    return 0;
}

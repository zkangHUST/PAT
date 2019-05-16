#include<stdio.h>
#define MAX 1000
struct stu
{
    char id[15];
    int test_id;
    int exam_id;
};

int main()
{
    int N,i;
    struct stu s[MAX];
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%s %d %d",s[i].id,&s[i].test_id,&s[i].exam_id);
    int n;
    scanf("%d",&n);
    int id;
    int j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&id);
        for(j=0;j<N;j++)
        {
            if(id==s[j].test_id)
            {
                printf("%s %d\n",s[j].id,s[j].exam_id);
            }
        }
    }   
    return 0;
}

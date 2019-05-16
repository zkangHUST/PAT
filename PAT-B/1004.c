#include<stdio.h>
#define MAX 1000
struct student
{
    char name[11];
    char id[11];
    int score;
};
typedef struct student stu;
stu* max(stu a[],int n);
stu* min(stu a[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    stu a[MAX];
    for(;i<n;i++)
    {
        scanf("%s",a[i].name);
        scanf("%s",a[i].id);
        scanf("%d",&a[i].score);
    }
    stu* m= max(a,n);
    stu* s = min(a,n);
    printf("%s %s\n",m->name,m->id);
    printf("%s %s",s->name,s->id);
    return 0;
}
stu* min(stu a[],int n)
{
    int i=0;
    int min=0;
    for(;i<n;i++)
    {
        if(a[i].score<a[min].score) 
            min = i;
    }
    return &a[min];             
}
stu* max(stu a[],int n)
{
        int i=0;
        int max=0;
        for(;i<n;i++)
        {               
                if(a[i].score>a[max].score)
                        max = i;
        }
        return &a[max]; 
}

#include<stdio.h>
#include<stdlib.h>
struct student
{
    int de;
    int cai;
    int id;
    int total;
    int type;
};
typedef struct student stu;
void flag(stu* s,int l,int h);
int comp(const void* a,const void* b);
int main()
{
    int h,n,l, i;
    scanf("%d%d%d",&n,&l,&h);//n:学生总数，l:最低录取分数线，h:优先录取线
    stu *list;
    list = (stu*)malloc(sizeof(stu)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&list[i].id,&list[i].de,&list[i].cai);
        flag(&list[i],l,h);
        if(list[i].type==-1)    
        {
            i--;
            n--;            
        }
    }
    qsort(list,n,sizeof(stu),comp);
    printf("%d\n",n);
    for(i=0;i<n;i++)
        printf("%d %d %d\n",list[i].id,list[i].de,list[i].cai);
    free(list);
    return 0;
}
void flag(stu* s,int l,int h)
{
    if(s->de<l||s->cai<l)
    {
        s->type = -1;
        return ;
    }
    s->total = s->de + s->cai;
    if(s->de>=h&&s->cai>=h)
    {
        s->type = 1;
    }
    else if(s->de>=h&&s->cai<h)
    {
        s->type = 2;
    }
    else if(s->de<h)
    {
        if(s->de>=s->cai)
        {
            s->type = 3;
        }
        else if(s->de<s->cai)
        {
            s->type = 4;
        }
    }
}
int comp(const void* a,const void* b)
{
    stu *pa = (stu*)a;
    stu *pb = (stu*)b;
    if(pa->type==pb->type)
    {
        if(pa->total==pb->total)
        {
            if(pa->de==pb->de)
                return pa->id-pb->id;
            else
                return pb->de - pa->de;
        }
        else
        {
            return pb->total - pa->total;
        }
    }
    else
    {
        return (pa->type)-(pb->type);
    }
}

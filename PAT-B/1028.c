#include<stdio.h>
#define MAX 100000
struct man
{
    char name[6];
    int year;
    int month;
    int day;
};
struct man old(struct man[],int n,int* count);
struct man young(struct man[],int n,int* count);
void compare_old(struct man* a,struct man* old);

int date(struct man *a);
int main()
{
    struct man a[MAX];
    int N;
    int count = 0;
    scanf("%d",&N);
    int i = 0;
    for(;i<N;i++)   
    {
        scanf("%s",a[i].name);
        scanf("%d/%d/%d",&a[i].year,&a[i].month,&a[i].day);
    }
    struct man max=old(a,N,&count);
    struct man min=young(a,N,&count);
    if(count == 0)
    printf("0");
        else
        printf("%d %s %s",count,max.name,min.name);
return 0;
}
struct man old(struct man a[],int n,int* count)
{
    struct man old={"z",2014,9,7};
    int i;
    for(i=0;i<n;i++)
    {
        if(date(&a[i])!=0)  
        {   
            if(a[i].year<old.year)
                old = a[i];
            else if((a[i].month<old.month)&&(a[i].year==old.year))
                old = a[i];
            else if((a[i].year==old.year)&&(a[i].month==old.month)&&(a[i].day <old.day))
                old = a[i];
            (*count)++;
        }
    }
    return old;
}
struct man young(struct man a[],int n,int* count)
{
        struct man young={"z",1814,9,5};
        int i;
        for(i=0;i<n;i++)
        {
                if(date(&a[i])!=0)
        {
                        if(a[i].year>young.year)
                                young = a[i];
                        else if((a[i].month>young.month)&&(a[i].year==young.year))
                                young = a[i];
                        else if((a[i].year==young.year)&&(a[i].month==young.month)&&(a[i].day > young.day))
                                young = a[i];
                }
        }
        return young;
}
int date(struct man *a)
{
    if(a->year>2014||a->year<1814)
        return 0;
    else if(((a->year==2014)&&(a->month>9))||((a->year==1814)&&(a->month<9)))
        return 0;
    else if(((a->year==2014)&&(a->month==9)&&(a->day>6))||((a->year==1814)&&(a->month==9)&&(a->day<6)))
        return 0;
    else
        return 1;

}
void compare_old(struct man* a,struct man* old) 
{
    if(a->year<old->year)
        *old=*a;
    else if((a->year==old->year)&&(a->month<old->month))
        *old = *a;
    else if((a->year==old->year)&&(a->month==old->month)&&(a->day<old->day))
        *old = *a;
}

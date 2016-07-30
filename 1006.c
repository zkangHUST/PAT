#include<stdio.h>
#include<string.h>
#define MAX 1000
typedef struct
{
	char id[20];
	char in_time[10];
	char out_time[10];
}staff;
staff* maxOutTime(staff* a,staff* b);
staff* minInTime(staff* a,staff* b);
int main()
{
	staff s[MAX];//
	int M,i;//M:总员工数
	scanf("%d",&M);
	for(i=0;i<M;i++)
		scanf("%s%s%s",s[i].id,s[i].in_time,s[i].out_time);
	staff* min=&s[0];
	staff* max=&s[0];
	for(i=0;i<M;i++)
	{
		min=minInTime(&s[i],min);
		max=maxOutTime(&s[i],max);
	}
	printf("%s %s\n",min->id,max->id);
	return 0;
}
staff* minInTime(staff* a,staff* b)
{
	int flag=strcmp(a->in_time,b->in_time);
	if(flag<0)
		return a;
	else
		return b;
}
staff* maxOutTime(staff* a,staff* b)
{
        int flag=strcmp(a->out_time,b->out_time);
        if(flag>0)
                return a;
        else
                return b;
}


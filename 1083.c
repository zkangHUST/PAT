#include<stdio.h>
#define MAX 1000
typedef struct 
{
	char name[11];
	char id[11];
	int grade;
}student;
int comp(const void* a,const void* b)
{
	student *m = (student*)a;
	student *n = (student*)b;
	return n->grade-m->grade;
}
int main()
{
	student s[MAX];
	int i,n,up,low,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %s %d",s[i].name,s[i].id,&s[i].grade);
	qsort(s,n,sizeof(student),comp);
	scanf("%d %d",&low,&up);
	for(i=0;i<n;i++)
	{
		if(s[i].grade>=low&&s[i].grade<=up)
		{
			count++;
			printf("%s %s\n",s[i].name,s[i].id);
		}
	}
	if(count==0)
		printf("NONE\n");
	return 0;
}

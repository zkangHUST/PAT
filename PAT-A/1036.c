#include<stdio.h>
#define MAX 10000
typedef struct 
{
	char name[11];
	char gender;
	char id[11];
	int grade;
}student;
int comp(const void* a,const void* b);
int main()
{
	student s[MAX];
	int i,n;
	int flagM =0,flagF = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %c %s %d",s[i].name,&s[i].gender,s[i].id,&s[i].grade);
	qsort(s,n,sizeof(student),comp);
	if(s[0].gender=='F')
	{
		flagF =1;
		printf("%s %s",s[0].name,s[0].id);
	}
	else
		printf("Absent");
	putchar('\n');
	for(i=0;i<n;i++)
	{
		if(s[i].gender=='M')
		{
			printf("%s %s\n",s[i].name,s[i].id);
			if(flagF ==1)
			{
				flagM=1;
				printf("%d",s[0].grade - s[i].grade);
			}
			break;
		}
	}
	
	if(i==n)
		printf("Absent\n");
	if((flagF==0)||(flagM==0))
		printf("NA");		
	return 0;
}
int comp(const void* a,const void* b)
{
	student* m = (student*)a;
	student* n = (student*)b;
	if(m->gender>n->gender)
	{
		return 1;
	}
	else if(m->gender<n->gender)
	{
		return -1;
	}
	else
	{
		if(m->gender == 'F')
		{
			return n->grade - m->grade;
		}
		else
		{
			return m->grade - n->grade;
		}
	}
}

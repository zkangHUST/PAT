#include<stdio.h>
#define MAXQUE 100
#define MAXSTU 1000
typedef struct 
{
	int ID;
	int value;//分值
	int m;//选项数
	int n;//正确选项数
	char ans[5];//正确答案
	int errorCnt;	
}question;
typedef struct 
{
	int n;//学生的答案个数
	char ans[5];
}stu;
int check(question* a,stu* b);
question que[MAXQUE];
stu student;
int score[MAXSTU]={0};
int main()
{
	int N,M,i=1,j=0,cnt = 1,flag=0;
	scanf("%d %d",&N,&M);//N为学生个数，M为题目个数
	while(i<=M)
	{
		scanf("%d%d%d",&que[i].value,&que[i].m,&que[i].n);
		que[i].ID=i;
		que[i].errorCnt=0;
		for(j=0;j<que[i].n;j++)
		{
			scanf(" %c",&que[i].ans[j]);
		}
		i++;
	}
	i=0;
	//getchar();
	while(i<N)
	{
		while(cnt<=M)
		{
			while(getchar()!='(');
			scanf("%d",&student.n);
			for(j=0;j<student.n;j++)
			{
				scanf(" %c",&student.ans[j]);
			}
			//getchar();
			flag = check(&que[cnt],&student);
			if(flag==0)
				que[cnt].errorCnt++;
			score[i]+=flag;//check(&que[cnt],&student[i]);
			cnt++;
		}
		i++;
		cnt =1;
	}
	for(i=0;i<N;i++)
		printf("%d\n",score[i]);
	int max =0 ;
	for(i=1;i<=M;i++)
	{
		if(que[i].errorCnt>max)
			max = que[i].errorCnt;
	}
	if(max==0)
	{
		printf("Too simple\n");
		return 0;
	}	
	printf("%d",max);
	for(i=1;i<=M;i++)	
	{	
		if(que[i].errorCnt==max)
			printf(" %d",que[i].ID);
	}
	return 0;
}
int check(question* a,stu* b)
{
	int i=0;
	if(b->n!=a->n)
	{
		return 0;
	}
	else
	{
		for(i=0;i<a->n;i++)
		{
			if(a->ans[i]!=b->ans[i])
				return 0;
		}		
	}
	return a->value;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
char c[100000];
char ans[1000];
void  getNum(char* p,int *a);
double check(char ans[]);
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	gets(c);
	char *p =c;
	int a=0;
	double sum = 0;	
	int count = 0;
	while(*p!='\0')
	{
		getNum(p,&a);
		if(check(ans)!=0)
		{
			count++;
			sum = sum +atof(ans);
		}
		p = p+a;
	}
	double ave = 0;
	if(count == 0)
	{
		printf("The average of 0 numbers is Undefined\n");
	}
	else
	{
		ave = sum/count;
		if(count == 1)
			printf("The average of 1 number is %.2f\n",ave);
		else
			printf("The average of %d numbers is %.2f\n",count,ave);
		
	}
	return 0;
}
void getNum(char* p,int *a)
{
	*a = 0;
	int j=0, sum = 0,flag = 1;
	memset(ans,0,1000);
	while(*p==' ')
	{
		p++;	
		(*a)++;
	}
	while(*p!=' '&&*p!='\0')
	{
		ans[j++]=*p;
		/*if(*p<'0'||*p>'9')
			flag = 0;
		else 
			sum = sum *10 + *p - '0';*/
		p++;
		(*a)++;
	}
	ans[j] = '\0';
/*	if(flag==1)
		return sum ;
	else
	{
		printf("ERROR: %s is not a legal number\n",ans);
		return 0;
	}*/
}
double check(char ans[])
{
	int len = strlen(ans);
	double sum = 0.0;
	int count = 0;
	int dot = 0,i=0;
	if(ans[0]=='-')
	{
		i=1;
		if(strlen(ans)==1)
		{
			printf("ERROR: %s is not a legal number\n",ans);
			return 0;
		}
	}
	for(;i<len;i++)
	{
		if(ans[i]>'9'||ans[i]<'0')
		{
			if(ans[i]!='.')
			{
				printf("ERROR: %s is not a legal number\n",ans);
				return 0;
			}
			else if(dot == 1)
			{
				printf("ERROR: %s is not a legal number\n",ans);
				return 0;
			}
			else
			{
				dot = 1;
			}
		}
		else
		{
			if(dot == 1)
				count++;
		}
	}
	if(count>2)
	{
		printf("ERROR: %s is not a legal number\n",ans);
		return 0;
	}
	sum = atof(ans);
	if(sum<-1000||sum > 1000)
	{
		printf("ERROR: %s is not a legal number\n",ans);
		return 0;
	}
	else 
		return 1;		
}

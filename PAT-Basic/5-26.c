nclude<stdio.h>
#include<string.h>
char c[100];
int num[100]={0};
int main()
{
	fgets(c,100,stdin);
	char *p=c;
	int state=0;
	int count = 0;
	int i=0,j=0;
	while(*p!='\0')
	{
		if(*p=='.')
		{	
			if(count>0)
			{
				num[j]=count;
				j++;
			}
		}
		else if(*p!=' ')
		{
			state = 1;
			count++;
		}
		else if(*p=' ')
		{
			state = 0;
			if(count>0)
			{
				num[j]=count;		
				j++;
			}
	
			count = 0;
		}
		p++;
	}
for(i=0;i<j;i++)
{
	if(i<j-1)
		printf("%d ",num[i]);
	else 
		printf("%d",num[i]);
}
return 0;	
}


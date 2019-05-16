#include<stdio.h>
#include<string.h>
char a[21]={0};
char b[21]={0};
int count[10]={0};
int main()
{
	scanf("%s",a);
	int i,tmp=0, len = strlen(a)-1;
	for(i=len;i>=0;i--)
	{
		count[a[i]-'0']++;
		b[i]=(tmp+(a[i]-'0')*2)%10+'0';
		tmp =((tmp+(a[i]-'0')*2))/10;
	}
	if(tmp>0)
	{
		printf("No\n");	
		printf("1%s",b);	
	}
	else
	{
		for(i=len;i>=0;i--)
		{
			count[b[i]-'0']--;
		}
		for(i=0;i<=9;i++)
		{
			if(count[i]!=0)
			{
				printf("No\n%s",b);
				return 0;
			}
		}
		printf("Yes\n%s",b);
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
char c_0[][5]={"tret","jan","feb","mar","apr","may","jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char c_1[][4]={"\0","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
char in[10][10]={0};
char ans[10]={0};
void num_to_char(int n,char* ans);
void print_mars(char* ans[]);
int main()
{
	int n,i=0;
	int tmp;
	scanf("%d",&n);
	getchar();
	while(i<n)
	{
		gets(in[i]);
		i++;
	}
	for(i=0;i<n;i++)
	{
		memset(ans,0,10);
		if(isNum(in[i]))
		{
			tmp = GetNum(in[i]);
			num_to_char(tmp,ans);
			printf("%s\n",ans);				
		}
		else
		{
			tmp = mars_to_earth(in[i]);
			printf("%d\n",tmp);
		}
	}
	return 0;
}
int mars_to_earth(char* in)
{	
	int i=0,sum=0;
	for(i=1;i<13;i++)
	{
		if(strstr(in,c_1[i]))
		{
			sum = i*13;
			break;
		}
	}
	for(i=0;i<13;i++)
	{
		if(strstr(in,c_0[i]))
		{
			sum = sum + i;
			break;
		}
	}
	return sum;
}
void num_to_char(int n,char* ans)
{
	char *p;
	int i=0;
	if(n>=13)
	{
		p = c_1[n/13];	
		while(*p!='\0')
		{
			ans[i] = *p;
			i++;
			p++;
		}
		if(n%13!=0)
		{
			ans[i] = ' ';
			i++;
			p = c_0[n%13];
        	        while(*p!='\0')
        	        {
        	                ans[i] = *p;
        	                i++;
        	                p++;
        	        }
			ans[i]= '\0';
		}
		else
		{
			ans[i] = '\0';
		}
		
	}
	else
	{
                p = c_0[n%13];
                while(*p!='\0')
                {
                        ans[i] = *p;
                        i++;
                        p++;
                }
		ans[i] = '\0';

	}	
}
int GetNum(char* s)
{
	int num=0;
	char *p =s;
	while(*p!='\0')
	{
		num = num*10 + *p - '0';
		p++;
	}
	return num;
}
int isNum(char *s)
{
	if(s[0]>='0'&&s[0]<='9')
		return 1;
	else 
		return 0;
}

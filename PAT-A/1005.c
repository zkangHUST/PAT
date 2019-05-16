#include<stdio.h>
#include<string.h>
#define MAX 101
char c[MAX];
char ans[MAX]={0};
char set[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void num_to_char(int n);
int main()
{
	scanf("%s",c);
	int len = strlen(c),i,sum = 0;
	for(i=0;i<len;i++)
	{
		sum = sum + c[i]-'0';
	}
	num_to_char(sum);
        len = strlen(ans);
        for(i=len-1;i>=0;i--)
        {
                printf("%s",set[ans[i]-'0']);
                if(i!=0)
                        putchar(' ');
        }	
	return 0;
}
void num_to_char(int n)
{
	if(n==0)
	{
		ans[0] = '0';
		ans[1]= '\0';
		return;
	}
	int i=0;
	while(n!=0)
	{
		ans[i] = n%10 + '0';
		i++;
		n=n/10;
	}
	ans[i] = '\0';
	return;
}

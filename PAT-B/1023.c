#include<stdio.h>
//void sort(char c[]);
char c[51];
int n;
int main()
{
    int i=0,j=0;
    int count=0;
    for(;i<10;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            c[count]=i+'0'; 
            count++;
        }
    }
    c[count]='\0';
	i=0;
	if(c[0]!='0')
		printf("%s",c);
	else
	{
 		while(c[i]=='0')
			i++;
		c[0] = c[i];
		c[i] = '0';
		printf("%s",c);
	}	
    return 0;
}

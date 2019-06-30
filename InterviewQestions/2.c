#include<stdio.h>
#include<string.h>
char a[1000];
char b[1000];
int main()
{
	int len;
	scanf("%d,",&len);
	int i,j;
	for(i=0;i<len;i++)	
	{
		scanf("%c",&a[i]);
	}
	b[0]=a[0];
	j=0;
	for(i=1;i<len;i++)
	{
		if(a[i]==b[j])
			;
		else
			b[++j]=a[i];
	}
	len = strlen(b);
	for(i=0;i<len;i++)
		putchar(b[i]);
	return 0;
}

#include<stdio.h>
int  a[3],b[3],c[3];
int main()
{
	scanf("%d.%d.%d",&a[2],&a[1],&a[0]);
	scanf("%d.%d.%d",&b[2],&b[1],&b[0]);
	int tmp;
	c[0]=(a[0]+b[0])%29;
	tmp = (a[0]+b[0])/29;
	c[1] = (tmp+a[1]+b[1])%17;
	tmp = (tmp+a[1]+b[1])/17;
	c[2]=(a[2]+b[2]+tmp);
	printf("%d.%d.%d",c[2],c[1],c[0]);
	return 0;
}

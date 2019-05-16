#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	if(a>60)
		printf("Speed: %d - Speeding",a);
	else
		printf("Speed: %d - OK",a);
	return 0;
}

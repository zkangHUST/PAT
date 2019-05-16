#include<stdio.h>
#include<math.h>
#define mold(A,B) sqrt(A*A+B*B)
int main()
{
	int n,re,im;
	float temp,max=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&re,&im);
		temp = mold(re,im);
		if(temp>max)
			max = temp;
	}
	printf("%.2f\n",max);
	return 0;
}

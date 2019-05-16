#include<stdio.h>
#include<math.h>
#include<string.h>
char c[11]={0};
int count_1(int n);
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int sum = count(n);
	printf("%d",sum);
	return 0;
}
int count(int n)
{
	int factor = 1;
	int sum = 0,lower,high,cur;
	while(n/factor!=0)
	{
		lower = n%(factor);
		high = n/(factor*10);
		cur = (n/factor)%10;
		switch(cur)
		{
		case 0:
			sum += high *factor;
			break;
		case 1:
			sum += high *factor + lower+1;
			break;
		default:
			sum += (high+1)*factor;
		break;
		}
		factor=factor*10;
	}
	return sum;
}

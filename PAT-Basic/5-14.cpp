#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int sum = 0;
	int m ,n;
	cin>>m>>n;
	int i=0;
	while(m<n)
	{
		sum += m;
		printf("%5d",m);
		i++;
		 if(i==5)
		{
			putchar('\n');
			i=0;
		}
		m++;		
	}
	sum+=n;
	printf("%5d\n",n);
	printf("Sum = %d",sum);
	return 0;
}

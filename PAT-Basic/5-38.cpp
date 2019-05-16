#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int temp = 0,sum =0;
	int i;
	cin>>m>>n;
	for(i=1;i<=n;i++)
	{
		temp = temp*10+m;
		sum+=temp;
	}
	cout<<sum;
	return 0;
}

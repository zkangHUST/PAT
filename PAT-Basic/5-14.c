#include<iostream>  
#include<cstdio>  
using namespace std;  
int main()
{
	int a,b;
	cin>>a>>b;
	int sum = 0;
	for(int i=a;i<=b;i++)
		{
			cout.width(5);
			cout<<i;
			sum = sum +i;
		if((i-a+1)%5==0&&i!=b)
			cout<<endl;
		}
		cout<<endl<<"Sum"<<' '<<"="<<' '<<sum;
		
	return 0;
}

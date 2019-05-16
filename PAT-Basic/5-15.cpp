#include<iostream>
using namespace std;
int main()
{
	float a,sum=1,temp=1.0;
	int i =1;
	cin>>a;
	while(temp>=a)
	{
		temp = temp*i/(2*i+1);
		sum = sum +temp;
		i = i+1;
	}
	
	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<2*sum;
}


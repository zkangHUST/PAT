#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	
	int a = x/100.0/0.3048;
	int b = (x/100.0/0.3048-a)*12;
	cout<<a<<' '<<b;
	return 0;
}

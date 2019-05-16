#include<iostream>
using namespace std;
int main()
{
	float f1,f2;
	int a;
	char c;
	cin>>f1>>a>>c>>f2;
	cout<<c<<' '<<a<<' ';
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<f1<<' '<<f2;
	return 0;
}

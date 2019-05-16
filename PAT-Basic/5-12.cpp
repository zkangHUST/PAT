#include<iostream>  
#include<cstdio>  
using namespace std;  
int main()
{
	int num1,num2;
	char c;
	cin>>num1>>c>>num2;
	switch(c)
	{
		case('+'):
			cout<<num1+num2;
			break;
		case('-'):
			cout<<num1-num2;
			break;
		case('*'):
			cout<<num1*num2;
			break;
		case('/'):
			cout<<num1/num2;
			break;
		case('%'):
			cout<<num1%num2;
			break;
		default:
			cout<<"ERROR";
			break;
	}
	return 0;
}

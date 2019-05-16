#include<iostream>  
#include<cstdio>  
using namespace std;  
float calc(const int ton);
int main()
{
	float ton;

	cin>>ton;

		printf("%.2f",calc(ton));

	return 0;
}
float calc(const int ton)
{

	if(ton<=15)
		return (4*ton)/3.0;
	else
		return 2.5*ton-17.5;
}

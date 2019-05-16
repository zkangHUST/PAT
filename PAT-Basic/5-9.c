#include<iostream>
using namespace std;
char judge(const int a,const int b,const int c);
int main()
{
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	cout<<judge(num1,num2,num3);
}
char judge(const int a,const int b,const int c)
{
	if(a!=b&&a!=c)
		return 'A';
	if(b!=a&&b!=c)
		return 'B';
	if(c!=b&&c!=a)
		return 'C';
		
}

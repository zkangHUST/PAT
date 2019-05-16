#include<iostream>  
#include<cstdio>  
#include<string>
using namespace std; 
int main()
{
	string str[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"};
	string a;
	cin>>a;
	char m=a.length();
	for(int i=0;i<a.length();i++)
	{
		switch(a[i])
		{
			case('-'):
				cout<<str[10];
				break;
			case('0'):
				cout<<str[0];
				break;
			case('1'):
				cout<<str[1];
				break;
			case('2'):
				cout<<str[2];
				break;
			case('3'):
				cout<<str[3];
				break;
			case('4'):
				cout<<str[4];
				break;
			case('5'):
				cout<<str[5];
				break;
			case('6'):
				cout<<str[6];
				break;
			case('7'):
				cout<<str[7];
				break;
			case('8'):
				cout<<str[8];
				break;
			case('9'):
				cout<<str[9];
				break;
		}
		if(i!=a.length()-1)
			cout<<' ';
	}
	return 0;
}

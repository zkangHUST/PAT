#include<iostream>  
#include<cstdio>  
using namespace std;  
int calc(int a,int b);
int main()
{
	int a,b;
	char c;
	cin>>a>>c>>b;
	int com =calc(a,b);

	cout<<a/com<<'/'<<b/com;		
	return 0;
}
int calc(int a,int b)
{
	int i=1;
	if(a>b)
	{
		while(i!=0)
		{
			i=a%b;
			a=b; 
			b=i;		
		}
		return a;
	}
	else if(a<b)
	{
		while(i!=0)
		{
			i=b%a;
			b=a; 
			a=i;		
		}
		return b;
	}	
	else if(a==b)
		return a;
}

#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
float f(float x);
float num[4];
int main()
{

	for(int i=0;i<4;i++)
		cin>>num[i];		
	float a,b;
	cin>>a>>b;
	float mid;
	while((b-a)>0.001&&f(a)*f(b)<=0)
	{
		if(f(a)==0)
			{
				cout<<fixed<<setprecision(2)<<a;
				return 0;
			}
		else if(f(b)==0)
			{
				cout<<fixed<<setprecision(2)<<b;
				return 0;
			}
		
		mid=(a+b)/2;
		if(f(a)*f(mid)>0)
			{
				a=mid;
			}
		else 
		{
			b = mid;
		}			
	}
	cout<<fixed<<setprecision(2)<<mid;		
	
	return 0;
	
	
}
float f(float x)
{
	float sum =0;
	for(int i=0;i<=3;i++)
		sum = sum*x + num[i];
	return sum;
}


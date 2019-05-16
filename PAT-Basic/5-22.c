#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	int l1=0,l2=0;
	while(t>0)
	{
		if(l1<=l2)
		{
			if(t<10)
			{
				l1=l1+9*t;
				l2=l2+3*t;
				t=t-10;
			}
			else
			{
				l1=l1+90;
				l2=l2+30;
				t=t-10;
			}
		
		}
		else
		{
			if(t<30)
			{
				l2=l2+3*t;
				t=t-30;
			}
			else
			{
				l2=l2+90;
				t =t-30;
			}
			
		}
	}
	if(l1>l2)
	
	cout<<"^_^"<<' '<<l1;
	else if(l1<l2)
	cout<<"@_@"<<' '<<l2;
	else 
	cout<<"-_-"<<' '<<l1;
	return 0;
	
}

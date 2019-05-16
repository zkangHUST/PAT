#include<iostream>
using namespace std;
int main()
{
	int a;
	int num[2];
	int min;
	cin>>a;
	num[0]=a/100;
	num[1]=a%100;
	cin>>min;
	if(min>=0)
	{
		int temp = num[1]+min;
		if(temp>=60)
		{
			num[0]= num[0]+temp/60;
			num[1]=temp%60;
		}
		else
		{
			num[1]=temp;
		}
	}
	else 
	{
		int p=num[0]*60+num[1];
		p = p+min;
		num[0] = p/60;
		num[1]=p%60; 
	}
	cout<<num[0];
	if(num[1]<10)
		cout<<'0';
	cout<<num[1];
	return 0;		
}

#include<iostream>  
#include<cstdio>  
using namespace std;  
int main()
{
	float open,high,low,close;
	cin>>open>>high>>low>>close;
	if(close<open)
		{
			cout<<"BW-Solid";
			if(low<open&&low<close&&high>open&&high>close)
				cout<<" with Lower Shadow and Upper Shadow";
			else if(high>open&&high>close)
				cout<<" with Upper Shadow";
			else if(low<open&&low<close) 
				cout<<" with Lower Shadow";			
		}
	else if(close >open)
		{
			cout<<"R-Hollow";
			if(low<open&&low<close&&high>open&&high>close)
				cout<<" with Lower Shadow and Upper Shadow";
			else if(high>open&&high>close)
				cout<<" with Upper Shadow";
			else if(low<open&&low<close) 
				cout<<" with Lower Shadow";		
		}
	else
		{
			cout<<"R-Cross";
			if(low<open&&low<close&&high>open&&high>close)
				cout<<" with Lower Shadow and Upper Shadow";
			else if(high>open&&high>close)
				cout<<" with Upper Shadow";
			else if(low<open&&low<close) 
				cout<<" with Lower Shadow";	
		}	
	
	return 0;
}

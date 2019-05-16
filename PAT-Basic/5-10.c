#include<iostream>  
#include<cstdio>  
using namespace std;  
float calc(const int year,const int hour);
int main()
{
	int year,hour;

	cin>>year>>hour;
	printf("%.2f",calc(year,hour));
	return 0;
}
float calc(const int year,const int hour)
{
	float salary=0;
	if(year<5)
	{
		if(hour<=40)
			salary = 30*hour;
		else
			salary = 1200+30*1.5*(hour-40);
	}
	else
	{
		if(hour<=40)
			salary = 50*hour;
		else
			salary = 2000+50*1.5*(hour-40);
	}
	return salary;
}

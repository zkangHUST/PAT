#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int y;
	int f;
bool flag =0;
for(int f=0;f<=100;f++)
	for(int y=0;y<=100;y++)
		if((98*f-199*y)==n)
			{
				cout<<y<<'.'<<f;
				flag =1;	
				break;
			}
if(flag==0)
	cout<<"No Solution";
return 0;
}


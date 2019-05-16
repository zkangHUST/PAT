#include<iostream>
#include<iomanip>
using namespace std;

struct node
{
	string name;
	float area;
	float money;
};
void print(node a);
void space(int n);
void line(int n);
int main()
{
	node m[5]={{"Anhui",139600,6461.00},{"Beijing",16410.54,1180.70},{"Chongqing",82400.00,3144.23},{"Shanghai",6340.50,1360.26},{"Zhejiang",101800.00,4894.00}};
	line(36);
		cout<<endl;
	cout<<"Province";
	space(6);
	cout<<"Area(km2)";
	space(3);
	cout<<"Pop.(10K)";
	cout<<endl;
	line(36);
	cout<<endl;
	for (int i =0;i<5;i++)
	{
		print(m[i]);
		cout<<endl;
	}
	line(36);
	return 0;
}
void print(node a)
{
	cout<<a.name;
	space(14-a.name.length());
	cout.setf(ios::fixed);
	cout.setf(ios::right) ;
	cout.precision(2);
	cout<<setw(9)<<a.area;
	space(3);
	cout.precision(2);
	cout<<a.money;
}
void space(int n)
{
	for(int i=1;i<=n;i++)
		cout<<' ';
}
void line(int n)
{
	for(int i=1;i<=n;i++)
		cout<<'-';
}

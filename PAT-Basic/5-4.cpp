#include<iostream>
#include<math.h>
using namespace std;
int max(int a);
int main()
{
	int a;
	cin>>a;
	int num[8]={0,0,0,0,0,0,0,0};
	int b[2]={0,0};
	int n=0;
	while(a!=0)
		{
			num[max(a)]=1;
			a=a-pow(2,max(a));
		}
	for(int i=0;i<=3;i++)
		b[0]=b[0]+num[i]*pow(2,i);
	for(int i=4;i<=7;i++)
		b[1]=b[1]+num[i]*pow(2,i-4);
	int x=b[1]*10+b[0];
	cout<<x<<endl;
	return 0;
}
int max(int a)
{
	int n = 0;
	while(a>=pow(2,n))
		{
			++n;
		}
	return n-1;
}


#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int num[3];
	num[0]=a%10;
	num[1]=a/10%10;
	num[2]=a/100;
	int i=0;
	while(num[i]==0)
	{
		i++;
	}
	for(int j=i;j<=2;j++)
		cout<<num[j];
	return 0;
}


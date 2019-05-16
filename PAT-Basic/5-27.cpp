#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int num[n];
	int temp;
	for(int i=0;i<n;i++)
		cin>>num[i];
	for(int i=n-1;i>=n-k;i--)
		for(int j=0;j<i;j++)
			if(num[j]>num[j+1])
			{
				temp =num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
			cout<<num[i]<<' ';
		else
			cout<<num[i];
	}
	return 0;
}

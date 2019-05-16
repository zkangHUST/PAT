#include<iostream>
using namespace std;
int main()
{
	int N,U,D;
	cin>>N>>U>>D;
	int n=0;
	while((U-D)*n+U<N)
	{
		n++;
	}
	cout<<2*n+1;
return 0;
}


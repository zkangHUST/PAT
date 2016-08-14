#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int NextPrime(int a);
int main()
{
	int Tsize,N,tmp;
	vector<int> num;
	vector<int>position;
	cin>>Tsize>>N;
	Tsize = NextPrime(Tsize);
	int p;
	for(int i=0;i<N;i++)
	{
		cin>>tmp;
		num.push_back(tmp);
	}
	for(int i=0;i<Tsize;i++)
		position.push_back(-1);
	
	for(int i=0;i<N;i++)
	{
		tmp = num[i];
		for(int j=0;;j++)
		{
			p = (tmp+(int)pow(j,2))%Tsize;
			
			if(position[p]==-1)
			{
				position[p]=1;
				cout<<p;
				break;
			}
			if(p==tmp%Tsize&&j!=0)
			{
				cout<<'-';
				break;
			}
		}
		if(i<N-1)
			cout<<' ';
	}
}
int NextPrime(int a)
{
	int i;
	if(a<2)
		return 2;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			a++;
			i=1;
		}
	}
	return a;
}

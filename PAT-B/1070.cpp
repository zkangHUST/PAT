#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
	int N,m;
	cin>>N;
	vector<int> ripe(N);
	for(int i=0;i<N;i++){
		cin>>m;
		ripe[i]=m;
	}
	sort(ripe.begin(),ripe.end());
	int res = ripe[0]; 
	for(int i=1;i<N;i++)
		res = (res+ripe[i])/2;
	cout<<res;
	return 0;
}

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	int M,N,S,i;
	scanf("%d%d%d",&M,&N,&S);
	map<string,int> name;
	string user;
	bool flag = false;
	for(i=1;i<=M;i++)
	{
		cin>>user;
		if(name[user]==1)
			S++;
		if(i==S&&name[user]==0)
		{
			name[user]=1;//user中奖了，那么将他放入name这个map中，值置为1表示存在
			cout<<user<<endl;
			flag = true;
			S+=N;
		}
	}
	if(!flag)
		cout<<"Keep going...";

	return 0;
}

#include<iostream>
#include<queue>
#include<vector>
#define MAX 100
using namespace std;
int l[MAX]={0};
vector<int> num[MAX];
void BFS(int s,int* level);
int main()
{
	int N,M,ID,k,tmp;
	int level = 1;
	cin>>N>>M;
	for(int i=0;i<M;i++)
	{
		cin>>ID>>k;
		for(int j=0;j<k;j++)
		{
			cin>>tmp;
			num[ID].push_back(tmp);
		}
	}
	BFS(1,&level);
	for(int i=1;i<=level;i++)
	{
		cout<<l[i];
		if(i<level)
			cout<<' ';
	}
	return 0;
}
void BFS(int s,int* level)
{
	queue<int> q;
	q.push(s);
	int count=1;
	int cnt;
	int tmp;
//	int level = 1;
	int count0=0;
	while(!q.empty())
	{
		cnt = count;
		count = 0;
		//l[*level]=count0;
		count0=0;
		for(int i=0;i<cnt;i++)
		{
			//count0=0;
			tmp = q.front();
			q.pop();
			if(num[tmp].size()==0)
				count0++;	
			else
			{
				for(int j=0;j<num[tmp].size();j++)
				{
					q.push(num[tmp][j]);
					count++;
				}	
			}
		}
		l[*level]=count0;
		(*level)++;
	}
	(*level)--;
	//l[*level]=count0;
}

#include<iostream>
using namespace std;
#define MAX 100
#include<queue>
#include<vector>
vector <int> num[MAX];
bool visited[MAX]={0};
void BFS(int s);
int sum = 0;
int max_level =1;
int main()
{
	int N,M; //N总人数，M有孩子的人数
	cin>>N>>M;
	int ID,k;
	int tmp;
	for(int i=0;i<M;i++)
	{
		cin>>ID>>k;
		for(int j=0;j<k;j++)
		{
			cin>>tmp;
			num[ID].push_back(tmp);				
		}
	}
	BFS(1);
	cout<<sum<<" "<<max_level;
	return 0;
}
void BFS(int s)
{
	int level =1;
	//max_level = 1;
	int cnt,cnt1=1;
	//max = 0;
	queue<int> q;
	q.push(s);
	visited[s]=true;
	int tmp;
	while(!q.empty())
	{
		cnt=cnt1;
		cnt1=0;
		if(cnt>sum)
		{
			sum = cnt;
			max_level = level;
		}
		for(int j=0;j<cnt;j++)
		{
			tmp = q.front();
			q.pop();
			visited[tmp]= true;
			for(int i=0;i<num[tmp].size();i++)
			{
				q.push(num[tmp][i]);
				cnt1++;
			}
		}
		level++;
	}
}

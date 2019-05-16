#include<iostream>
#include<vector>
#include<cstdlib>
#include<queue>
#define MAX 100001
#include<cmath>
#include<cstdio>
using namespace std;
double price,rate;
int visited[MAX]={0};
vector<int> a[MAX];
void BFS(int s);
int main()
{
	int n;
	cin>>n;
	cin>>price>>rate;
	int tmp;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		if(tmp==-1)
			tmp = n;
		a[tmp].push_back(i);
	}
	BFS(n);
	return 0;
}
void BFS(int s)
{
	int level =1;
	int cnt,cnt1=1;
	queue<int> q;
	q.push(s);
	visited[s]=true;
    	int tmp;
   	while(!q.empty())
   	{
        	cnt=cnt1;
        	cnt1=0;
        	for(int j=0;j<cnt;j++)
        	{
			tmp = q.front();
        		q.pop();
        	    	visited[tmp]= true;
            		for(int i=0;i<(int)a[tmp].size();i++)
           		{
                		q.push(a[tmp][i]);
               			cnt1++;
            		}
        	}
    	    level++;
    	}
	level--;
	price = price*pow((1+rate/100),level-2);
	printf("%.2lf %d",price,cnt);
}

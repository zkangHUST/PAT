#include<cstdio>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	stack<string> s;
	string m;
	char c;
	while((c=getchar())!='\n'){
		ungetc(c,stdin);
		cin>>m;
		s.push(m);
	}
	int flag = 0;
	while(!s.empty())
	{
		
		m = s.top();
		s.pop();
		cout<<m;
		if(!s.empty())
			cout<<' ';
	}
	return 0;
}

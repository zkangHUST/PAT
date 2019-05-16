#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int c,cnt=0,state=0;
	while((c=getchar())!='.')
	{
		if(c!=' ')
			cnt++;
		else
		{
			if(cnt)
				cout<<cnt<<' ';
			cnt = 0;
		}
	}
	if(cnt)
		cout<<cnt;
	return 0;
}

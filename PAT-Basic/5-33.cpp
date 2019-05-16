#include<iostream>
using namespace std;
struct fenshu
{
	int m;
	int n;
};
fenshu calc(const fenshu a,const fenshu b);
void print(fenshu a);
int main()
{
	fenshu num[2];
	fenshu ans;
	char c;
	for(int i=0;i<=1;i++)
		cin>>num[i].m>>c>>num[i].n;
	ans=calc(num[0],num[1]);
	print(ans);
return 0;
}
fenshu calc(const fenshu a,const fenshu b)
{
	fenshu ans;
	ans.m=a.m*b.n+b.m*a.n;
	ans.n =a.n*b.n;
	int i=2;
	while((i<=ans.m)&&(i<=ans.n))
	{
		if((ans.m%i==0)&&(ans.n%i==0))
			{
				ans.m=ans.m/i;
				ans.n=ans.n/i;
				i=1;
			}
		i++;
	}
	return ans;
}
void print(fenshu a)
{
	if(a.n==1)
		cout<<a.m;
		else
		cout<<a.m<<"/"<<a.n;
}


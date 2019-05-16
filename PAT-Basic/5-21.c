#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	bool flag=0;
	cin>>n;
	for(int i =1;i<sqrt(n);i++)
		{
			for(int j=1;j<sqrt(n);j++)
				{
					if((i*i+j*j)==n&&i<j)
						{
							flag = 1;
							cout<<i<<' '<<j;
							cout<<endl;
						}
				}
		
		}
		if(!flag)
			cout<<"No Solution";
			
return 0;
}

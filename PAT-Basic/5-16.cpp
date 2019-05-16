#include<iostream>
using namespace std;
int main()
{
int n;
int temp=-1;
cin>>n;
 int num[4]={n,n+1,n+2,n+3};

 for(int i=0;i<=3;i++)
 	{
	 for(int j=0;j<=3;j++)
 		{
		
		 for(int k=0;k<=3;k++)
 			{ 	
			 				
				 if(i!=j&&i!=k&&j!=k)
 					{
 						if(temp==i)
							 cout<<' ';
						 else
				 			temp = i;
						cout<<num[i]<<num[j]<<num[k];
					}
 			}
 		
		}
 		if(i!=3)
		 cout<<endl;
	}
return 0;
}


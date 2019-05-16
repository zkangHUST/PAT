#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void read(char* a);
void change(char* str,int x);
char num[11]="abcdefghij";
int main()
{
	
	char cap[10]="0SBQWSBQY";
	char num[11]="abcdefghij";

	unsigned int input;
	cin>>input;
	int x=input;
	int a=input%10000;
	input=input/10000;
	int b=input%10000;
	input=input/10000;
	int c=input%10000;

	char str1[5],str2[5],str3[5];

	change(str1,a);
	change(str2,b);
	change(str3,c);
	
	read(str3);
	if(c!=0)
		cout<<'Y';
	if(c!=0&&b<1000)
		cout<<'a';
	read(str2);
		if(b!=0)
			cout<<"W";
	if((b!=0||c!=0)&&a<1000)
		cout<<'a';
	read(str1);
	
	if(x==0)
		cout<<'a';	
	return 0;
}

void read(char* a)
{
	if(a[0]!='0')
		cout<<num[a[0]-'0']<<'Q';
	if(a[1]!='0')
		cout<<num[a[1]-'0']<<'B';
		else if(a[0]!='0'&&(a[2]!='0'||a[3]!='0'))
		cout<<'a';
	if(a[2]!='0')
		cout<<num[a[2]-'0']<<'S';
		else if(a[1]!='0'&&a[3]!='0')
			cout<<'a';
	if(a[3]!='0')
		cout<<num[a[3]-'0'];
}
void change(char* str,int x)
{
	str[3]=x%10+'0';
		x=x/10;
	str[2]=x%10+'0';
		x=x/10;
	str[1]=x%10+'0';
		x=x/10;
	str[0]=x%10+'0';
		
}

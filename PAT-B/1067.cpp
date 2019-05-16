#include <iostream>
#include<cstdio>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string password,key;
    int n;
    cin>>password>>n;
    getchar();        //吃掉'\n'
	  vector<string> s;
    while(1)
    {
		    getline(cin,key);         //读整行到key中，用户输入的密码中可能包含空格等字符，因此不能使用cin>>key
        if(key.compare("#")==0)
            break;
        s.push_back(key);
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i].compare(password)==0)
        {
            cout<<"Welcome in\n";
            break;
        }
        else if(s[i].compare(password)!=0)
        {
            if(n!=0)
            {
                cout<<"Wrong password: "<<s[i]<<endl;
                n--;
                if(n==0)
                {
                    cout<<"Account locked\n";
                    break;
                }
            }
        }
    }
    return 0;
}

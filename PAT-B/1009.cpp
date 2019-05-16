#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
        stack<char> a,b;
        char temp;
        char c;
        scanf("%c",&c);
    while(c!='\n'){
        if(c!=' ')
            a.push(c);
        else{
                while(!a.empty()){
                        temp = a.top();
                        a.pop();
                        b.push(temp);
                }
                if(!b.empty()){
                        temp = b.top();
                        b.pop();
                        if(temp==' ')
                          b.push(temp);
                        else{
                                b.push(temp);
                                b.push(' ');
                        }
                }
                else
                        b.push(' ');
        }
        scanf("%c",&c);
    }
    while(!a.empty()){
        temp =a.top();
        a.pop();
        b.push(temp);
    }
    while(!b.empty()){
            temp =b.top();
            b.pop();
            cout<<temp;
        }
    return 0;
}

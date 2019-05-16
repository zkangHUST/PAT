#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 500
struct stack
{
    char data[MAX];
    char* top;

};
void initStack(stack &a);
char pushStack(stack &a);
void popStack(stack &a, char c);
int isStackEmpty(const stack &a);
int main()
{
    stack a ;
    stack b;
    initStack(a);
    initStack(b);

    char temp;
    char c;
    scanf("%c",&c); 
    while(c!='\n')
    {
        if(c!=' ')
            popStack(a,c);
        else
        {
            while(!isStackEmpty(a))
            {
                temp = pushStack(a);
                popStack(b,temp);       
            }
            /*if(isStackEmpty(a))
 *  *              popStack(a,c);*/
        if(!isStackEmpty(b))
            {
                temp = pushStack(b);
                if(temp==' ')
                    popStack(b,temp);
                else
                    {
                        popStack(b,temp);   
                        popStack(b,' ');
                    }   
            }
        else
            popStack(b,' ');             
        }
        scanf("%c",&c);     
    }
    while(!isStackEmpty(a))
    {
        temp =pushStack(a);
        popStack(b,temp);   
    }
    while(!isStackEmpty(b))
        {
            temp =pushStack(b); 
            cout<<temp;
        }
    return 0;
}
void initStack(stack &a)
{
    a.top =a.data;
}
void popStack(stack &a, char c)
{
    a.top+=1;
    *a.top=c;
}
char pushStack(stack &a)
{
    char temp = *a.top;
    a.top-=1;
    return temp;
}
int isStackEmpty(const stack &a)
{
    if(a.top==a.data)
        return 1;
    else
        return 0;

}

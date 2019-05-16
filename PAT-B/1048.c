#include<stdio.h>
typedef struct
{
  char c[201];
  int top;
}stack;
void initStack(stack* s)
{
  s->top = -1;
}
void push(stack* s,char m)
{
  s->top++;
  s->c[s->top]=m;
}
char pop(stack* s)
{
  char tmp=s->c[s->top];
  s->top--;
  return tmp;
}
int main()
{
  char c;
  stack s;
  int i=0;
  char a[101];
  for(i=0;i<101;i++)
    a[i]='0';
  char b[101];
  for(i=0;i<101;i++)
                b[i]='0';

  initStack(&s);
  while((c=getchar())!='\n')
  {
    push(&s,c);
  }
  int flag=0;
  char temp;
  i=100;
  int j=100;
  while(s.top!=-1)
  {
    temp=pop(&s);
    if(temp!=' '&&flag==0)
    {
      b[i--]=temp;
    }
    else if(temp==' ')
    {
      flag = 1;
    }
    else if(temp!=' '&&flag==1)
    {
      a[j--]=temp;
    }
  }
  int min=(i<j)?i:j;
  i=100;
  for(i=100;i>min;i--)
  {
    if(i%2==1)
    {
      a[i]=b[i]-a[i];
      if(a[i]<0)
        a[i]=a[i]+10+'0';
      else
        a[i]=a[i]+'0';
    }
    else if(i%2==0)
    {
      a[i]=(a[i]-'0'+b[i]-'0')%13;
      if(a[i]>=0&&a[i]<=9)
        a[i]=a[i]+'0';
      else if(a[i]==10)
        a[i]='J';
      else if(a[i]==11)
        a[i]='Q';
      else if(a[i]==12)
        a[i]='K';
    }
  }
  i=0;
  for(i=min+1;i<=100;i++)
  {
      putchar(a[i]);
  }
  
  return 0;
}

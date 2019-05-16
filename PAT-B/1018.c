#include<stdio.h>
int a[3]={0,0,0};
int b[3]={0,0,0};
int jia_C=0,jia_B=0,jia_J=0;
int yi_C=0,yi_B=0,yi_J=0;
char print(int b,int c,int j);

int main()
{
    char m,n;
    int N;
    scanf("%d",&N);
    int  i=0;
    for(;i<N;i++)
    {
        getchar();
        m=getchar();
        getchar();
        n=getchar();
        if(m==n)
        {
            a[1]++;
            b[1]++;
        }
        else if(((m=='C')&&(n=='J'))||((m=='J')&&(n=='B'))||((m=='B')&&(n=='C')))
        {
            if(m=='B')
                jia_B++;
            else if(m=='C')
                jia_C++;
            else if(m=='J')
                                jia_J++;
            a[0]++;
            b[2]++;
        }
        else
                {
                if(n=='B')
                                yi_B++;
                        else if(n=='C')
                                yi_C++;
                        else if(n=='J')
                                yi_J++;
                    a[2]++;
                        b[0]++;
                }

    }
printf("%d %d %d\n",a[0],a[1],a[2]);
printf("%d %d %d\n",b[0],b[1],b[2]);
char c=print(jia_B,jia_C,jia_J);
char d=print(yi_B,yi_C,yi_J);
printf("%c %c",c,d);
return 0;
}
char print(int b,int c,int j)
{
    if((b>=c)&&(b>=j))
    {
        return 'B';
    }
    else if(c>=j)
        return 'C';
    else
        return 'J';

}

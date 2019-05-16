#include<stdio.h>
char a[81];
char b[81];
int flag(char a[],char b,int i);
int main()
{
    char c;
    char bad_key[81];
    int count=0;
    scanf("%s%s",a,b);
    char*m=a,*n=b;
    int i=0;
    while(*m!='\0'&&*n!='\0')
    {
        if(*m==*n)
        {
            m++;
            n++;
        }
        else
        {
            if(*m>='a'&&*m<='z')
            {
                 c=*m-'a'+'A';
                if(flag(bad_key,c,count))
                    ;
                else                    
                    bad_key[count++]=c;
            }
            else
            {
                if(flag(bad_key,*m,count))
                    ;
                else
                    bad_key[count++]=*m;
            }
            m++;
        }
    }
    while(*m!='\0')
    {
                        if(*m>='a'&&*m<='z')
                        {
                                 c=*m-'a'+'A';
                                if(flag(bad_key,c,count))
                                        ;
                                else
                                        bad_key[count++]=c;
                        }
                        else
                        {
                                if(flag(bad_key,*m,count))
                                        ;
                                else
                                        bad_key[count++]=*m;
                        }
                        m++;
    }
	bad_key[count]='\0';
	printf("%s",bad_key);
	return 0;
}
int flag(char a[],char b,int i)
{
    int j=0;
    for(j=0;j<i;j++)
    {
        if(a[j]==b)
            return 1;
    }
    return 0;   
}

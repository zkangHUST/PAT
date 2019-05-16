#include<stdio.h>
char* zeng(char z[]);
char* jian(char z[]);
void int_char(char a[],int n);
int char_int(char a[]);
int main()
{
    int N;
    char z[5];
    char j[5];
    int a=0,b=0;
    char num[5];
    scanf("%d",&N);
    if(N==6174)
        N=7641;
    while(N!=6174)
    {
        int_char(num,N);
        jian(num);
        a=char_int(num);
        zeng(num);
        b = char_int(num);
        N= a-b;
        printf("%s ",jian(num));
        printf("- %s = ",zeng(num));
        if(N!=0)
            printf("%04d",N);
        else
        {
            printf("0000");
            putchar('\n');
            break;
        }
        putchar('\n');
    }

    return 0;
}
char* zeng(char z[])
{
    int i=3,j=0;
    char tmp;
    for(i=3;i>0;i--)
        for(j=0;j<i;j++)
        {
            if(z[j]>z[j+1])
            {
                tmp = z[j];
                z[j]=z[j+1];
                z[j+1]=tmp;
            }   
        }   
    z[4]='\0';
    return z;
}

char* jian(char z[])
{
    int i=3,j=0;
        char tmp;
        for(i=3;i>0;i--)
                for(j=0;j<i;j++)
                {
                        if(z[j]<z[j+1])
                        {
                                tmp = z[j];
                                z[j]=z[j+1];
                                z[j+1]=tmp;
                        } 
                } 
    z[4]='\0';
    return z;
}
void int_char(char a[],int n)
{
    int i=0;
    a[0]=n%10+'0';
    a[1]=(n/10)%10+'0';
    a[2]=(n/100)%10+'0';
    a[3]=(n/1000)%10+'0';
    a[4]='\0';
}
int char_int(char a[])
{
    int sum=0;
    sum =((a[0]-'0')*1000+(a[1]-'0')*100+(a[2]-'0')*10+(a[3]-'0'));
    return sum;
}

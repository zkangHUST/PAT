#include<stdio.h>
#include<string.h>
int main()
{
        char a[101],b[101];
        int diff = 0;
        int flag = 1,temp;
        scanf("%s%s",a,b);
        int i = strlen(a);
        int j = strlen(b);
        if(j<i)
        {
                 diff = i-j;
                 memmove(b+diff,b,j+1);//j+1表示将末尾的'\0'一起复制过去
                 memset(b,'0',diff);//将前面的diff个字符置为'0';
                 j = strlen(b);
        }
        i--;
        j--;
        while((i>=0)&&(j>=0))
        {
                if(flag)
                {
                        temp=(a[i]+b[j]-'0'-'0')%13;
                        if(temp==10)
                                b[j] = 'J';
                        else if(temp==11)
                                b[j] = 'Q';
                        else if(temp==12)
                                b[j] = 'K';
                        else
                                b[j] = temp + '0';
                        flag = 0;
                }
                else
                {
                        temp = b[j] - a[i];
                        if(temp<0)
                                temp += 10;
                        b[j] = temp + '0';
                        flag = 1;
                }
                i--;
                j--;
       }
       printf("%s",b);
       return 0;
}

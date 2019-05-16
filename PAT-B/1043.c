#include<stdio.h>
char s[100001];
int count[6];
char c[]={'P','A','T','e','s','t'};
 int max(int a[],int len);
int main()
{
    scanf("%s",s);
    char *p = s;
    while(*p!='\0')
    {
        switch (*p)
        {case 'P':count[0]++;break;
        case 'A':count[1]++;break;
        case 'T':count[2]++;break;
        case 'e':count[3]++;break;
        case 's':count[4]++;break;
        case 't':count[5]++;break;
        }
        p++;
    }
    int m = max(count,6);
    while(m--)
    {
        if(count[0]>0){
            putchar('P');
            count[0]--;}
                if(count[1]>0){
                        putchar('A');
                        count[1]--;}
                if(count[2]>0){
                        putchar('T');
                        count[2]--;}
                if(count[3]>0){
                        putchar('e');
                        count[3]--;}
                if(count[4]>0){
                        putchar('s');
                        count[4]--;}
                if(count[5]>0){
                        putchar('t');
                        count[5]--;}
    }


return 0;   
}
int max(int a[],int len)
{
    int i=0;
    int max = a[0];
    for(i=0;i<len;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    return max;
}

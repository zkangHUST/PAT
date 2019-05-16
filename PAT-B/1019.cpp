#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
int decrease(char a,char b){
        return a>b;
}
int char_int(char a[],int n);
int main()
{
    int N;
    int a=0,b=0;
    char num[5];
    scanf("%d",&N);
    if(N==6174)
        N=7641;
    while(N!=6174)
    {
        int_char(num,N);            //PAT的编译器中不让使用itoa函数，只能自己写一个，不然可以用itoa(N,num,10)语句代替,也可以用sprintf函数
        //sprintf(num,"%d",N);        
        sort(num,num+4,decrease);   //递减排序
        a=atoi(num);                //字符串转换成整数
        sort(num,num+4);            //递增排序
        b = atoi(num);
        N= a-b;
        printf("%04d ",a);
        printf("- %04d = ",b);
        if(N!=0)
            printf("%04d",N);
        else{
            printf("0000");
            putchar('\n');
            break;
        }
        putchar('\n');
    }
    return 0;
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

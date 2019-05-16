#include<stdio.h>
void print(int i);
char c[101];
char n[10][20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main()
{
    scanf("%s",c);
    int i=0;
    int sum = 0;
    while(c[i]!='\0'){
        sum = sum +c[i]-'0';
        i++;
    }
    print(sum);
    return 0;
}
void print(int i)
{
    if(i/10==0){
        printf("%s",n[i%10]);
    }
    else{
        print(i/10);
        printf(" %s",n[i%10]);
    }
}

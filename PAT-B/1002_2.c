#include<stdio.h>
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
    sprintf(c,"%d",sum);
    int len = strlen(c);
    for(i=0;i<len-1;i++)
    {
      printf("%s ",n[c[i]-'0']);
    }    
    printf("%s",n[c[i]-'0']);
    return 0;
}

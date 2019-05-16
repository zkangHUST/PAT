#include<stdio.h>
char c[101];
int isRight(char c[]);
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s",c);
        if(isRight(c))
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
int isRight(char c[])
{
    char* p= c;
    int flagA=0,countA=0,flagB=0,countB=0,countC=0,countP=0,countT=0;
    while(*p!='\0'){
        if(*p!='P'&&*p!='A'&&*p!='T')
            return 0;
        else if(*p=='A'&&flagA==0){
            countA++;
        }
        else if(*p=='P'){
            flagA=1;
            countP++;
        }
        else if(*p=='A'&&flagA==1&&flagB==0){
            countB++;
        }
        else if(*p=='T'){
            flagB=1;
            countT++;           
        }
        else if(*p=='A'&&flagA==1&&flagB==1){
            countC++;
        }
        p++;
    }
if(countA*countB==countC&&countB!=0&&countP==1&&countT==1)
    return 1;
else 
    return 0;
}

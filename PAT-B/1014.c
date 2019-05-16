#include<stdio.h>
#define MAX 100
char week[][4]={" ","MON","TUE","WED","THU","FRI","SAT","SUN"};
int main()
{
    char c[4][MAX];
    int i=0;
    for(;i<4;i++)
        scanf("%s",c[i]);
    char *m,*n;
    int day,hour;
    int count = 0;
    m=c[0],n=c[1];
    while(*m!='\0'&&*n!='\0'){
        if((*m==*n)){
            if(count==0&&(*m>='A'&&*m<='G')){
                count++;
                day=*m-'A'+1;
            }
            else if(count==1&&(*m>='0'&&*m<='9)){
                count++;
                hour = *m-'0';
                break;
            }
            else if(count==1&&(*m>='A'&&*m<='N')){
                count++;
                hour = *m - 'A'+10;
                break;
            }
        }
        m++;n++;
    }
    m=c[2],n=c[3];
    int minute=0;
    while(*m!='\0'&&*m!='\0'){
        if(*m==*n&&((*m>='a'&&*m<='z')||(*m>='A'&&*m<='Z'))){
            break;
        }
        minute++;
        m++;n++;
    }
    printf("%s %02d:%02d",week[day],hour,minute);
    return 0;
}


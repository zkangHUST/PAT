#include<stdio.h>
int main()
{
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    int time = (c2-c1)/100;
    if(((c2-c1)%100)>=50)
        time++;
    int hour = (time/3600);
        time=time%3600;
    int minute = time/60;
        time = time%60;
    int second = time;
    printf("%02d:%02d:%02d",hour,minute,second);
    return 0;
}

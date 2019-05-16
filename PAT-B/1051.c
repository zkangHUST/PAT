#include<stdio.h>
#include<math.h>
int main()
{
    double a_r,b_r;
    double a_p,b_p;
    scanf("%lf%lf%lf%lf",&a_r,&a_p,&b_r,&b_p);

    double r=a_r*b_r*cos(a_p+b_p);
    double p=a_r*b_r*sin(a_p+b_p);
    int flag_r = 1;
    int flag_p = 1;
    if(fabs(r)<0.01)
        flag_r=0;
    if(fabs(p)<0.01)
        flag_p=0; 
    if(flag_r==0&&flag_p==0)
        printf("0");
    else if(flag_p==0&&flag_r!=0)   
        printf("%.2f+0.00i",r);
    else if(flag_r==0&&flag_p!=0)
        printf("0.00%+.2fi",p);
    else
        printf("%.2f%+.2fi",r,p);

    return 0;
}

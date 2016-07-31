#include<stdio.h>
char ans[11][20];
int main()
{
    long long a[11],b[11],c[11];
    int N;
    scanf("%d",&N);
    int i=1;
	while(i<=N)
	{
        	scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
		i++;
	}
	for(i=1;i<=N;i++)
        {
		if((a[i]+b[i])>c[i])
        	{
        	    printf("Case #%d: true",i);
          	        putchar('\n');
       		}
        	else
        	{   
        	    printf("Case #%d: false",i);
        	        putchar('\n');
       		}
	}
   
return 0;
}

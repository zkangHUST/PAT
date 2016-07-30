#include<stdio.h>
#define MAX 1000
int main()
{
	int list[MAX];
	int n, time = 0,i,p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&list[i]);
	for(i=0;i<n;i++){	
		if(list[i]>p){
			time = time + (list[i]-p)*6+5;
			p = list[i];
		}
		else{
			time = time +(p-list[i])*4+5;
			p = list[i];
		}
	}
	printf("%d",time);
	return 0;
}

#include<stdio.h>
int ans[100000]={0};
int factor(int m,int n);
void swap(int*a,int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a_n,a_m,b_n,b_m;	
	int k,temp;
	scanf("%d/%d",&a_n,&a_m);
	scanf("%d/%d",&b_n,&b_m);
	scanf("%d",&k);
	if(a_n*b_m>b_n*a_m){
		swap(&a_n,&b_n);
		swap(&a_m,&b_m);
	}	
	int i = 1,j=0;
	while(a_n*k>=a_m*i)	//注意>=不是>
		i++;
	while((a_n*k<a_m*i)&&(b_n*k>i*b_m)){
		if(factor(k,i))
			ans[j++]=i;
		i++;
	}
	for(i=0;i<j-1;i++){
		printf("%d/%d ",ans[i],k);
	}
	printf("%d/%d",ans[j-1],k);
	return 0;
}
int factor(int m,int n)
{
	int temp ;
	if(n>m){
		temp =m;m=n;n=temp;
	}
	while(n){
		temp = m%n;
		m=n;
		n=temp;
	}
	if(m>1)
		return 0;
	else
		return 1;
}

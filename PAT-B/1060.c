#include<stdio.h>
#include<stdlib.h>
#define MAX 100005
int distance[MAX]={0};
int comp(const void* a,const void* b){
	return *(int*)b-*(int*)a;
}
int main()
{
	int n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&distance[i]);
	}
	qsort(distance,n,sizeof(int),comp);
	for(i=0;i<n;i++){
		if(distance[i]-1<=(i+1)){	//注意理解题意，爱尔顿数是有E天骑车超过(是大于而不是大于等于)E公里的最大整数，对于distance[i],那么说明有i+1天(因为数组下标从0开始)骑行距离超过distance[i]-1。
			printf("%d\n",distance[i]-1);	
			break;
		}
	}
	return 0;
}

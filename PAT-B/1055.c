#include<stdio.h>
#include<stdlib.h>
#define MAX 10001
typedef struct
{
	char name[10];
	int  height;
}stu;
int comp(const void* a ,const void* b)
{
	stu* m = (stu*)a;
	stu* n = (stu*)b;
	if(m->height==n->height)
		return strcmp(n->name,m->name);
	else
		return m->height - n->height;
}
void sort(stu* w,stu* s,int m,int n);
int main()
{
	stu s[MAX];
	stu w[MAX];
	int i, n,k,m;//n:总人数，k为排数，m为每排人数
	scanf("%d%d",&n,&k);
	m = n/k;
	int p,j;
	for(i=1;i<=n;i++)
		scanf("%s%d",s[i].name,&s[i].height);
	qsort(s+1,n,sizeof(stu),comp);
	for(i=1;i<k;i++){	
		sort(w,s,(i-1)*m+1,i*m);
	}
	sort(w,s,(k-1)*m+1,n);
	for(j=(k-1)*m+1;j<=n;j++){
		printf("%s",w[j].name);
		if(j!=n)
			putchar(' ');
	}
	putchar('\n');
	for(i=k-1;i>=1;i--){
		for(j=(i-1)*m+1;j<=i*m;j++){
			printf("%s",w[j].name);
			if(j!=i*m)
				putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
void sort(stu* w,stu* s,int m,int n)
{
	int i,j = (m+n+1)/2;
	int left =j-1,right = j;
	int flag = 1;
	for(i=n;i>=m;i--){
		if(flag == 0){
			w[left] = s[i];
			left--;
			flag = 1;
		}
		else{
			w[right]=s[i];
			right++;
			flag = 0;
		}
	}
}

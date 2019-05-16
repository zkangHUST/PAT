#include<stdio.h>
int couple[100000];
int man[100000]={0};
#define MAX 100000
int ans[100000]={0};
int main()
{
	int n,i=0;
	int a,b;
	scanf("%d",&n);
	for(i=0;i<MAX;i++)
		couple[i]=-1;		//初始化为-1是为了避免对ID为00000的客人造成干扰，如果不初始化，那么没有对象的客人通通会被认为其对象ID为00000
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		couple[a]=b;		//数组下标表示客人ID，元素值表示其对象的ID
		couple[b]=a;
	}
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a);
		man[a]=1;		//下标表示客人ID，值为1表示该客人来了，为0表示没来
	}
	int cnt = 0,j=0;
	for(i=0;i<MAX;i++)
		if(man[i]==1&&man[couple[i]]!=1)
		{
			cnt++;
			ans[j]=i;
			j++;
		}
	printf("%d\n",cnt);
	if(cnt==0)
		return 0;
	for(i=0;i<j-1;i++)
	{
		printf("%05d ",ans[i]);
	}
	printf("%05d",ans[j-1]);
	return 0;
}

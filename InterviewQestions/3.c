#include<stdio.h>
int min(int a[],int len);
int max(int a[],int len);
int x[1000];
int y[1000];
int res[4000];
int main()
{
	int minX,minY,maxX,maxY,len;
	int i=0,cnt=0;
	while(1)
	{
		len=save(x,y);
		if(len ==0)
			break;
		else
			minX=min(x,len);
			minY=min(y,len);
			maxX=max(x,len);
			maxY=max(y,len);
			if(minX!=maxX&&minY!=maxY)
			{
				res[i]=minX;
				res[i+1]=minY;
				res[i+2]=maxX;
				res[i+3]=maxY;
				i+=4;
				cnt++;
			}
	
	}
	i=0;
	while(cnt)
	{
		printf("%d %d %d %d\n",res[i],res[i+1],res[i+2],res[i+3]);
		i+=4;
		cnt--;
	}
	return 0;
		
}
int save(int x[],int y[])
{
	int i=0;
	int a,b;
	scanf("%d%d",&a,&b);
	while(a!=0||b!=0)
	{
		x[i]=a;
		y[i]=b;
		i++;
		scanf("%d%d",&a,&b);
	}
	return i;
}
int min(int a[],int len)
{
	int i;
	int m = a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]<m)
			m=a[i];
	}
	return m;
}
int max(int a[],int len)
{
	int i;
	int m = a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	return m;
}

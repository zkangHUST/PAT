#include<stdio.h>
float odd[3];
char set[3]={'W','T','L'};
char tag[4]={0};
float max(float*  odd,char *flag);
int main()
{
	int i=0;
	float sum =1;
	for(i=0;i<3;i++)
	{
		scanf("%f%f%f",&odd[0],&odd[1],&odd[2]);
		sum = sum *  max(odd,&tag[i]);			
	}
	sum =(sum*0.65-1)*2;
	printf("%c %c %c %.2lf",tag[0],tag[1],tag[2],sum);
	return 0;
}
float max(float* odd,char *flag)
{
	float m = -1;
	int i=1;
	for(i=0;i<3;i++)
	{
		if(m<odd[i])
		{
			m = odd[i];
			*flag = set[i];
		}
	}
	return m;
}

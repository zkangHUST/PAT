#include<stdio.h>
int main()
{
  int i;
  scanf("%d",&i);
  int b=i/100;
  while(b--)
    printf("B");
  int s=(i/10)%10;
  while(s--)
    printf("S");
  int g=i%10;
  int j=1;
  for(;j<=g;j++)
    printf("%d",j);  

  return 0;
}

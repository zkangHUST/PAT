#include<stdio.h>
int main()
{
  int i,count=0;
  scanf("%d",&i);
  while(1!=i){
    if(i%2==0){
      i=i/2;
      count++;  
    }
    else{
      i=(3*i+1)/2;
      count++;
    }
  }
  printf("%d",count);
  return 0;
}

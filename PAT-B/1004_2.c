#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
  char name[11];
  char id[11];
  int score;
}student;
int main()
{
  int n;
  student m,max,min;
  max.score = 0;
  min.score = 100;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%s",m.name);
    scanf("%s",m.id);
    scanf("%d",&m.score);
    if(m.score>max.score)
      max = m;
    if(m.score<min.score)
      min = m;
  }
  printf("%s %s\n",max.name,max.id);
  printf("%s %s",min.name,min.id);
  return 0;
}

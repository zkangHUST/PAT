#include<stdio.h>
#include<ctype.h>
int main()
{
  int i,res,c,cnt[26]={0},max = 0;
  while((c=getchar())!='\n')
  {
    if(islower(c))
      cnt[c-'a']++;
    else if(isupper(c))
      cnt[c-'A']++;
  }
  for(i=0;i<26;i++)
  {
    if(cnt[i]>max)
    {
      max = cnt[i];  
      res = i;
    }
  }
  putchar(res+'a');
  printf(" %d",max);
  return 0;
}

#include<stdio.h>
char bad_key[101];
char text[100001];
char out_text[100001];
int bad(char a[],char c);
int main()
{
    gets(bad_key);
    scanf("%s",text);
    char *p=text;
    int flag = 0,count=0;
    flag = bad(bad_key,'+');
    while(*p!='\0'){
        if(*p>='a'&&*p<='z'){
            if(bad(bad_key,*p-'a'+'A')==0){
                putchar(*p);
                count++;
            }
        }
        else if(*p>='A'&&*p<='Z'){
            if(bad(bad_key,*p)==0){
                if(flag == 0){
                    putchar(*p);
                    count++;
                }
            }
        }
        else{
            if(bad(bad_key,*p)==0){
                putchar(*p);
                count++;
            }

        }
        p++;
    }
if(count==0)
    putchar('\n');
return 0;   
}
int bad(char a[],char c)
{
    char*p= a;
    while(*p!='\0'){
        if(*p==c)
            return 1;
        else if(c>='a'&&c<='z'){
            if(*p==(c-'a'+'A'))
                return 1;
        }
    p++;
    }
    return 0;
}

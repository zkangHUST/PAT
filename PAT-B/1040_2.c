#include<stdio.h>
int main(){
    char c;
    int countA=0,countP=0,count=0,countPA=0;
    while((c=getchar())!='\n'){
        if(c=='P'){
        	countP++;//P的个数
        }
        else if(c=='A'){
		countPA=countPA+countP;//countPA是PA组合的个数
        }
        else if(c=='T'){
            	count=(count+countPA)%1000000007;
        }
    }
    printf("%d",count);
    return 0;
}

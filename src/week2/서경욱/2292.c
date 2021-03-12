#include <stdio.h>

int main(){
    int N, num=0, compare=1;
    scanf("%d",&N);
    
    while(N>compare){
        compare=3*num*num+3*num+1;
        num++;
    }
    if(N==1) printf("1");
    else     printf("%d",num);
    
    return 0;
}

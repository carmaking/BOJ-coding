#include <stdio.h>

int main(void){
    int x, i=1, top=1, bottom=1;
    scanf("%d", &x);
    
    for (i=1; x>i; i++){
        x -= i;
    } //i는 행, x는 그 행에서 순서
    if ((i%2)==0){ //짝수행
        top = x;
        bottom = i+1-x;
    }
    else { //홀수행
        top = i+1-x;
        bottom = x;
    }
    printf("%d/%d", top, bottom);
    
    return 0;
}

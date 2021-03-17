#include <stdio.h>

int main(void){
    int N, count=0;
    scanf("%d", &N);
    
    while (1){
        if (N%5 == 0){
            count += N/5;
            break;
        }
        N -= 3;
        count++;
        
        if (N<0){
            count=-1;
            break;
        }
    }
    printf("%d", count);
    return 0;
}

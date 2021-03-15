#include <stdio.h>

int main(void){
    int N, count=0, start=1;
    scanf("%d", &N);
    
    while (start < N){
        count++;
        start += 6*count;
    }
    printf("%d", count+1);
    return 0;
}

#include <stdio.h>
int main(void){
    int A=1,B=1;
    while (A){
        scanf("%d %d", &A, &B);
        if (A==0){
            break;
        }
        printf("%d\n", A+B);
    }
    return 0;
}

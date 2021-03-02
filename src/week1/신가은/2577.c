#include <stdio.h>
int main(void){
    int A, B, C, mul, num;
    int arr[9]={};
    scanf("%d %d %d", &A, &B, &C);
    mul = A*B*C;
    while(mul){
        num = mul%10;
        arr[num]++;
        mul /= 10;
    }
    for (int i=0; i<=9; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

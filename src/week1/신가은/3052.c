#include <stdio.h>
int main(void){
    int A, count=10;
    int arr[10];
    for (int i=0; i<10; i++){
        scanf("%d", &A);
        arr[i] = A % 42;
        for (int j=0; j<i; j++){
            if (arr[i] == arr[j]){
                count--;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}

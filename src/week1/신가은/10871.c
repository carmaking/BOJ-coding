#include <stdio.h>
int main(void){
    int N, X;
    scanf("%d %d", &N, &X);
    int a[N];
    for (int i=0; i<=N-1; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0; i<=N-1; i++){
        if (a[i]<X){
            printf("%d ", a[i]);
        }
    }
    return 0;
}

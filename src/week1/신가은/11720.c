#include <stdio.h>

int main(){
    int N, sum=0;
    char num[101];
    scanf("%d", &N);
    scanf("%s", &num);
    for (int i=0; i<N; i++){
        sum += (int)num[i] - 48;
    }
    printf("%d", sum);
    return 0;
}

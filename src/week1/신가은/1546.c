#include <stdio.h>
int main(void){
    int N=0;
    float mean=0, M=0;
    scanf("%d", &N);
    int score[N];
    for (int i=0; i<N; i++){
        scanf("%d", &score[i]);
        if (score[i] > M){
            M = score[i];
        }
    }
    for (int i=0; i<N; i++){
        mean += (float)score[i] / M * 100;
    }
    printf("%.2f", mean/N);
    return 0;
}

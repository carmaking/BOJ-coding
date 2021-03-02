#include <stdio.h>
int main(){
    int N=0, min=10000000, max=-1000000;
    scanf("%d", &N);
    int num[N];
    for (int i=0; i<N; i++){
        scanf("%d", &num[i]);
        if (num[i]<min){
            min = num[i];
        }
        if (num[i]>max){
            max = num[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}

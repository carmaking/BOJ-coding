#include <stdio.h>
int main(void){
    int num[8], max=0, pos=0;
    for (int i=0; i<9; i++){
        scanf("%d", &num[i]);
        if (num[i]>max){
            max = num[i];
            pos = i;
        }
    }
    printf("%d %d", max, pos+1);
    return 0;
}

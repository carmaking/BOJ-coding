#include <stdio.h>
int main(void){
    int N=1, originalN=1, a=1, b=1, i=0;
    scanf("%d", &N);
    originalN = N;
    while(1){
        a = N % 10; //주어진 수의 일의 자리 숫자
        b = (a + (N/10))%10; //주어진 수의 각 자리의 합의 일의 자리 숫자
        N = a*10 + b;
        i++;
        if (N==originalN){
            break;
        }
    }
    printf("%d", i);
    return 0;
}

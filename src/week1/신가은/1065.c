#include <stdio.h>
int hansoo(int num){
    int a,b,c;
    a = num/100;
    b = num%100;
    c = num%10;
    if ((a - b/10)==(b/10-c)){
        return 1;
    }
    else {
        return 0;
    }
}
int main(void){
    int X, N, i, count=0;
    scanf("%d", &N);
    if (N == 1000){
        for (i=N-1; i>99; i--){
            count += hansoo(i);
        }
        count += 99;
    }
    else if ((N<=1000) && (N>99)){
        for (i=N; i>99; i--){
            count += hansoo(i);
        }
        count += 99;
    }
    else if ((N<=99) && (N>0)){
        count = N;
    }
    printf("%d", count);
    return 0;
}

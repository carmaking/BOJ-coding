#include <stdio.h>

int main(void){
    int a, b, c, son;
    scanf("%d %d %d", &a, &b, &c);
    
    if (b>=c){
        son = -1;
    }
    else {
        son = a/(c-b) + 1;
    }
    printf("%d", son);
    return 0;
}

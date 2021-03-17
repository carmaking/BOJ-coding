#include <stdio.h>

int main(void){
    int k, n, T, i, j;
    scanf("%d", &T);
    
    int array[15][15] = {0, };
    for (i=0; i<15; i++){
        array[0][i] = i;
    }
    for (i=1; i<15; i++){
        for (j=1; j<15; j++){
            array[i][j] = array[i][j-1] + array[i-1][j];
        }
    }
    for (i=0; i<T; i++){
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", array[k][n]);
    }
    return 0;
}

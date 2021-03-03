#include <stdio.h>
#include <string.h>

int main(void){
    int N, score, add, i, j;
    char arr[81];
    scanf("%d", &N);
    
    for (i=0; i<N; i++){
        score = 0;
        add = 0;
        
        scanf("%s", &arr);
        for (j=0; j<strlen(arr); j++){
            if (arr[j] == 'O'){
                add++;
            }
            else {
                add = 0;
            }
            score += add;
        }
        printf("%d\n",  score);
    }
    return 0;
}

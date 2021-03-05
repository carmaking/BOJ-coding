#include <stdio.h>
#include <string.h>

int main(void){
    int T=1, R=1, length;
    char s[20];
    
    scanf("%d", &T);
    
    for (int i=0; i<T; i++){
        scanf("%d %s", &R, s);
        length = strlen(s);
        for (int j=0; j<length; j++){
            for (int k=0; k<R; k++){
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

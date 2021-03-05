#include <stdio.h>
#include <string.h>

int main(){
    int T,R;
    char S[20];
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %s",&R,S);
        for(int j=0;j<strlen(S)*R;j++){
            printf("%c",S[j/R]);  
        }
        printf("\n");
    }
    
    return 0;
}

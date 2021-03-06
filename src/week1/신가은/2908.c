#include <stdio.h>

int main(){
    char A[4], B[4];
    scanf("%s %s", A, B);
    
    for (int i=2; i>=0; i--){
        if (A[i]<B[i]){
            for (int j=2; j>=0; j--)
                printf("%c", B[j]);
            break;
        }
        else if (B[i]<A[i]){
            for (int k=2; k>=0; k--)
                printf("%c", A[k]);
            break;
        }
    }
    return 0;
}

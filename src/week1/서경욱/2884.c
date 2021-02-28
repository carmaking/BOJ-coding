#include <stdio.h>

int main(){
    int H,M;
    scanf("%d %d",&H,&M);
    
    if(M<45){
        H-=1; M+=60;
    }
    if(H<0)
        H+=24;
    
    M-=45;
    
    printf("%d %d",H,M);
    
    return 0;
}

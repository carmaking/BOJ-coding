#include <stdio.h>

int main(){
    int X, n=1 ,i;
    scanf("%d" ,&X);
    while(X>=(n*(n+1)/2)){
        n++;
    }
    if(X==(n-1)*n/2)
      n-=1;
    i=X-((n-1)*n)/2;
    if(n%2==0)
        printf("%d/%d",i,n+1-i);
    else
        printf("%d/%d",n+1-i,i);
    
    return 0;
}

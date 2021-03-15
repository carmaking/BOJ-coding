#include <stdio.h>
#include <math.h>

int main(){
    int A, B, V, day=0;
    scanf("%d %d %d",&A,&B,&V);
    
    if(A==V)
      printf("1");

    else{
      day=ceil((double)(V-A)/(A-B))+1;
      printf("%d",day);
    }
    
    
    return 0;
}

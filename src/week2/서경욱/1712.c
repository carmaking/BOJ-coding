#include <stdio.h>

int main(){
    int A,B,C,num=0,sum;
    scanf("%d %d %d",&A,&B,&C);
    if(B>=C)
        printf("-1");
    else
        printf("%d",A/(C-B)+1);
    return 0;
}

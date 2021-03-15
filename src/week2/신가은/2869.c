#include <stdio.h>

int main(void){
    int a, b, v, day;
    scanf("%d %d %d", &a, &b, &v);
    
    if (a==v) day=1;
    else {
        day = (v-a)/(a-b);
        
        if ((v-a)%(a-b)==0) day+=1; //a만큼 더 올라감
        else day+=2; //a-b만큼 a만큼 더 올라감
    }
    printf("%d\n", day);
    return 0;
}

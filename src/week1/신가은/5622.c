#include <stdio.h>
#include <string.h>

int main(){
    char s[16];
    scanf("%s", s);
    int len = strlen(s);
    int time=0;
    
    for (int i=0; i<len; i++){
        if (s[i]<='C') time += 3;
        else if (s[i]<='F') time += 4;
        else if (s[i]<='I') time += 5;
        else if (s[i]<='L') time += 6;
        else if (s[i]<='O') time += 7;
        else if (s[i]<='S') time += 8;
        else if (s[i]<='V') time += 9;
        else time += 10;
    }
    printf("%d", time);
    return 0;
}

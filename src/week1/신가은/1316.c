#include <stdio.h>
#include <string.h>

int check(char s[]){
    int a[26]={0, };
    
    for (int i=0; s[i] != '\0'; i++){
        if (s[i] != s[i+1]){
            if (a[s[i]-'a'] == 0) a[s[i]-'a']=1;
            else 
                return 0;
        }
    }
    return 1;
}

int main(){
    int N=0, count=0;
    char s[100];
    scanf("%d", &N);
    
    for (int i=0; i<N; i++){
        scanf("%s", s);
        if (check(s)) count++;
    }
    
    printf("%d", count);
    return 0;
}

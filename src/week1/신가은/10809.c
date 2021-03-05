#include <stdio.h>
#include <string.h>

int main(){
    char s[101] = {};
    char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int count[26];
    
    scanf("%s", &s);
  
    for (int m=0;m<26;m++){
        count[m] = -1;
    }
  
    for (int i=0; i<26; i++){
        for (int j=0; j<strlen(s); j++){
            if (s[j] == a[i]){
                count[i] = j;
                break;
            }
        }
    }
  
    for (int k=0;k<26;k++){
        printf("%d ", count[k]);
    }
    return 0;
}

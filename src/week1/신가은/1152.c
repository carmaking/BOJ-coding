#include <stdio.h>
#include <string.h>

int main(void){
    char s[1000000];
    int a[26]={0, };
    int len=0, max=0, maxcount=0, maxindex;
    
    scanf("%s", s);
    len = strlen(s);
    for (int i=0; i<len; i++){
        for (int j=0; j<26; j++){
            if (s[i]==j+'a'){
                a[j]++;
            }
        }
        for (int k=0; k<26; k++){
            if (s[i]==k+'A'){
                a[k]++;
            }
        }
    }
    for (int i=0; i<26; i++){
        if (a[i]>max){
            max = a[i];
            maxindex = i;
            maxcount=1;
        }
        else if (a[i] == max){
            maxcount++;
        }
    }
    if (maxcount == 1){
        printf("%c", 'A' + maxindex);
    }
    else{
        printf("?");
    }
    return 0;
}

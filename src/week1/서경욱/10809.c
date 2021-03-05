#include <stdio.h>
#include <string.h>

int main(){
    char S[100];
    scanf("%s",S);
    int alpha[26]={0,};
    for(int i=0;i<26;i++){
      alpha[i]=-1;
    }

    for(int i=0;i<strlen(S);i++){
      if(alpha[S[i]-'a']==-1)
        alpha[S[i]-'a']=i;
    }
    
    for(int i=0;i<26;i++)
      printf("%d ",alpha[i]);
    return 0;
}

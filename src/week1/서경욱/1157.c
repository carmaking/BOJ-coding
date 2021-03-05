#include <stdio.h>
#include <string.h>

int main(){
    char a[1000000];
    int alpha[26]={0,},index,maxindex=0,maxcount=0,len;
    scanf("%s",a);
    len=strlen(a);
    for(int i=0;i<len;i++){
        index=a[i];
        if(index>=97){
            index-=32;
        }
        alpha[index-'A']++;
    }
    for(int i=1;i<26;i++){
      
      if(alpha[i]>alpha[maxindex]){
        maxindex=i;
      }
    }    
    for(int i=0;i<26;i++){
      if(alpha[i]==alpha[maxindex]){
        maxcount++;
      }
    }
    if(maxcount==1)
      printf("%c",maxindex+'A');
    else
      printf("?");

    return 0;
}

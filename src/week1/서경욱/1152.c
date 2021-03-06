#include <stdio.h>
#include <string.h>

int main(){
    char a[1000000];
    int count=0,len;
    scanf("%[^\n]s",a);
    len=strlen(a);
    if((len==1)&&(a[0]==' '))
      count--;
    for(int i=1;i<len-1;i++)
      if(a[i]==' '){
        count++;
      }
    
    printf("%d",count+1);
    return 0;
}

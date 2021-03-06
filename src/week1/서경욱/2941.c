#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    scanf("%s",a);
    int len=strlen(a),count=0;
    for(int i=0;i<len;i++){
        count++;
        if(a[i]=='-'){
            if((a[i-1]=='c')||(a[i-1]=='d'))
                count--;
        }
        else if(a[i]=='='){
            if((a[i-1]=='c')||(a[i-1]=='s'))
                count--;
            else if(a[i-1]=='z'){
                if(a[i-2]=='d'){
                    count-=2;
                    continue;
                }
                count--;
            }
        }    
        else if(a[i]=='j'){
            if((a[i-1]=='l')||(a[i-1]=='n'))
                count--;
        }
    }
    printf("%d",count);
    
    return 0;
}

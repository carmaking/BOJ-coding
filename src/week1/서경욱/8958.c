#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d",&T);
    char a[80];
    for(int i=0;i<T;i++){
        int point=0,bonus=0;
        scanf("%s",&a);
        for(int i=0;i<strlen(a);i++){
            if(a[i]=='O'){
                bonus++;
            }
            else{
                bonus=0;
            }
            point+=bonus;
        }
        printf("%d\n",point);
    }
    
    return 0;
}

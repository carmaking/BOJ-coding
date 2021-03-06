#include <stdio.h>

int main(){
    char a[16];
    int time[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int mintime=0;
    scanf("%s",a);
    for(int i=0;a[i]!=NULL;i++){
        mintime+=time[a[i]-'A'];
    }
    printf("%d",mintime);
    
    return 0;
}

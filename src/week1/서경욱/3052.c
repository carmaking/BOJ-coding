#include <stdio.h>

int main(){
    int a[10],count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        a[i]%=42;
    }
    for(int i=0;i<10;i++){
        int check=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                check++;
                break;
                }
        }
        if(check==0){
          count++;
        }
    }
    printf("%d",count);
    return 0;
}

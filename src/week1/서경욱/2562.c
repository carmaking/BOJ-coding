#include <stdio.h>

void max(int arr[]){
    int max=arr[0],index=1;
    for(int i=1;i<9;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i+1;
        }
    }
    printf("%d\n%d",max,index);
}

int main(){
    int a[9];
    for(int i=0;i<9;i++)
        scanf("%d",&a[i]);
    max(a);
    
    return 0;
}

#include <stdio.h>

void d(){
    int a[10001]={0};
    int n;
    for(int i=1;i<10001;i++){
        n=i+(i/1000)+((i%1000)/100)+((i%100)/10)+(i%10);
        if(n<=10000){
            a[n]=1;
        }
    }
    for(int i=1;i<10001;i++){
        if(a[i]!=1)
            printf("%d\n",i);
    }
}

int main(){
    d();
    return 0;
}

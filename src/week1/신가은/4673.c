#include <stdio.h>

int findSelfNumber(){
    int num=0;
    int arr[10001] = {0}; //0으로 초기화
    
    for (int i=1; i<=10000; i++){
        if (i<10){
            num = i + i;
            arr[num] = 1;
        }
        else if (i<100){
            num = i + i/10 + i%10;
            arr[num] = 1;
        }
        else if (i<1000){
            num = i + i/100 + (i%100)/10 + (i%100)%10;
            arr[num] = 1;
        }
        else if (i<10000){
            num = i + i/1000 + (i%1000)/100 + ((i%1000)%100)/10 + ((i%1000)%100)%10;
            if (num<=10000) arr[num]=1;
        }
    }
    for (int k=1; k<=10000; k++){
        if (arr[k] != 1) printf("%d\n", k); //0으로 남아있는 수 출력
    }
    return 0;
}

int main(){
    findSelfNumber();
    return 0;
}

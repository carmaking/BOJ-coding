#include <stdio.h>

int max(int arr[],int num){
    int max=arr[0];
    for(int i=1;i<num;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int min(int arr[], int num){
    int min=arr[0];
    for(int i=1;i<num;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("%d %d",min(a,N),max(a,N));
    
    return 0;
}

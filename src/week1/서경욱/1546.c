#include <stdio.h>

int max(int arr[], int num){
    int max=arr[0];
    for(int i=1;i<num;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    double score,sum=0;
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++)
        sum+=a[i];
    score=(sum*100)/(max(a,N)*N);
    printf("%lf",score);
    
    return 0;
}

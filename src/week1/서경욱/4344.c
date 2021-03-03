#include <stdio.h>

int main(){
    int C,N;
    scanf("%d",&C);
    for(int j=0;j<C;j++){
        double average,sum=0,count=0;
        scanf("%d",&N);
        int a[N];
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        average=sum/N;
        for(int i=0;i<N;i++){
            if(a[i]>average){
                count++;
            }
        }
        printf("%.3lf%\n",count*100/N);
    }
    
    return 0;
}

#include <stdio.h>
void hansu(int n){
    int hun,ten,one,count=0;
    for(int i=1;i<=n;i++){
        if(i<100)
            count++;
        else{
            hun=i/100, ten=(i%100)/10, one=i%10;
            if((hun-ten)==(ten-one))
                count++;
        }
    }
    printf("%d",count);
}

int main(){
    int N;
    scanf("%d",&N);
    hansu(N);
    return 0;
}

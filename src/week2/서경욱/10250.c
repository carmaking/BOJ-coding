#include <stdio.h>

int main(){
    int T,H,W,N,room;
    scanf("%d", &T);
    for(int i=0;i<T;i++){
        scanf("%d %d %d",&H, &W, &N);
        room=000;
        if(N%H){
          room+=N/H+1;
          room+=(N%H)*100;
        }
        else{
          room+=N/H;
          room+=H*100;
        }

        printf("%d\n",room);
    }
    return 0;
}

#include <stdio.h>

int main(){
    int N,ten,one,temp,count=0;
    scanf("%d",&N);
    temp=N;
    
    while(1){
        ten=N-(N/10)*10;
        one=ten+(N/10);
        if(one>=10)
            one-=10;
        N=ten*10+one;
        count++;
        if(N==temp)
            break;   
    }
    
    printf("%d",count);
    
    return 0;
}

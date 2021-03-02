#include <stdio.h>

int main(){
    int A,B,C,num,n;
    scanf("%d %d %d",&A,&B,&C);
    num=A*B*C;
    int a[10]={};
    
    while(num){
      n=num%10;
      a[n]++;
      num/=10;
    }

    for(int i=0;i<10;i++)
      printf("%d\n",a[i]);

    return 0;
}

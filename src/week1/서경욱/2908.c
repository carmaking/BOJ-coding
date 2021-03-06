#include <stdio.h>

int main(){
    char a[4],b[4],temp;
    int A,B;
    scanf("%s %s",a,b);
    temp=a[2];
    a[2]=a[0];
    a[0]=temp;
    temp=b[2];
    b[2]=b[0];
    b[0]=temp;
    
    A=100*(a[0]-'0')+10*(a[1]-'0')+a[2]-'0';
    B=100*(b[0]-'0')+10*(b[1]-'0')+b[2]-'0';
    
    if(A>B)
        printf("%d",A);
    else
        printf("%d",B);
    
    return 0;
}

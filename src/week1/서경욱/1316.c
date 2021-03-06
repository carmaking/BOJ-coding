#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char a[101];
    int num=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s",a);
        int alpha[26]={0,},check=1;
        int len=strlen(a);
        for(int j=0;j<len;j++){
            if((a[j]==a[j-1])&&(j>0))
                continue;
            else{
                if(alpha[a[j]-'a']==0)
                    alpha[a[j]-'a']=1;
                else{
                    check=0;
                    break;
                }
            }    
        }
        if(check)
            num++;
    }
    printf("%d",num);
    
    return 0;
}

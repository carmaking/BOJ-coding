#include <stdio.h>

int main(){
    int C, N, count, sum;
    double mean, result;
    int score[1000];
    
    scanf("%d", &C);//테스트 케이스 개수 받음
    
    for (int i=0; i<C; i++){
        sum = 0;
        count = 0;
        scanf("%d", &N); //학생 수 받음
        
        for (int j=0; j<N; j++){
            scanf("%d", &score[j]); //N명 점수 입력받음
            sum += score[j];
        }
        mean = (double)sum/N; //평균 구함
        for (int k=0; k<N; k++){
            if (score[k] > mean){
                count++; //평균보다 점수 높으면 count
            }
        }
        result = (double)count/N*100;
        printf("%.3f%%\n", result); //소수점 셋째 자리까지 출력
    }
    return 0;
}

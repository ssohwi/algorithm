#include <stdio.h>

int main() {
    int N; // 사람 수
    scanf("%d", &N);
    
    int P[N]; // 소요 시간
    for(int i =0; i<N; i++){
    scanf("%d", &P[i]);
    }
    
    int temp = 0;
    int result =0;
    
    // 오름차순 정렬
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N-1; j++ ){
            if (P[i] > P[j+1]) {
                temp = P[j+1];
                P[j+1] = P[i];
                P[i] = temp;
            }
        }
    }
    
    // 총 소요시간 계산
    for(int i =0; i<N; i++){
        result += P[i]*(N-i);
    }
    
    printf("result = %d ", result);
}
#include <stdio.h>

int main() {

    int N, K; // 동전의 종류 수, 거스름 돈
    scanf("%d %d", &N, &K);
    
    int coin[N]; // 동전의 종류
    for (int i = 0; i < N; i++) {
        scanf("%d", &coin[i]);
    }
    int cnt = 0; // 총 동전의 수
    
    for (int i = N-1; i >= 0; i--) {
        cnt += K / coin[i];
        K %= coin[i];
    }
    printf("count = %d" , cnt); 
}
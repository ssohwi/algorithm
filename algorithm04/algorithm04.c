#include <stdio.h>

int main() {
    int N[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int n = sizeof(N)/sizeof(N[0]);
    int cnt =0;
    
    // 0이 아닌 숫자 채우기
    for (int i = 0; i < n; i++) {
        if (N[i] != 0) {
            N[cnt] = N[i];
            cnt++;
        }
    }
    
    // 0 채우기
    for (int i = cnt; i < n; i++) {
        N[i] = 0;
    }
    
    // 출력
    for (int i = 0; i < n; i++) {
        printf("%d ", N[i]);
    }
}
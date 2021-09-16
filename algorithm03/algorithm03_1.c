#include <stdio.h>

int main() {
    int N, K;
    int result=0;
    scanf("%d %d", &N, &K);
    
    while(N != 1) {
        if (N%K == 0) {
            N = N/K;
        }
        else {
            N -= 1;
        }
        result += 1;
    }
    
    printf("result = %d", result);
}
#include <stdio.h>

int main() {
    char S[20];
    scanf("%s", S);
    
    int result = S[0] - '0';
    for (int i = 1; i< strlen(S) ; i++) {
        int num = S[i] - '0';
        if (num < 2 || result < 2) {
            result += num;
        }
        else {
            result *= num;
        }
    }
    printf("resutl = %d", result );
}
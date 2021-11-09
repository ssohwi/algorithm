#include <stdio.h>
#include <string.h>

int isEven(int n){
    // XOR -> 홀수이면 1만큼 감소하고 짝수이면 1만큼 증가
    if((n^1)==(n+1))
        return 1;
    else
        return 0;
}


int main() {
    int n;
    scanf("%d", &n);
    if(isEven(n))
        printf("Even");
    else
        printf("Odd");
        
    
    return 0;
}
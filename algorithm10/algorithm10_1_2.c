#include <stdio.h>
#include <string.h>

int isOdd(int n){
    // AND -> 홀수이면 1, 짝수이면 0
    return(n&1);
}


int main() {
    int n;
    scanf("%d", &n);
    if(isOdd(n))
        printf("Odd");
    else
        printf("Even");
    
    return 0;
}
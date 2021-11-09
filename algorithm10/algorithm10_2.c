#include <stdio.h>
#include <string.h>
// 오른쪽에서 6번째 비트값이 0이면 대문자, 1이면 소문자

char *toggleCase(char *a){
    for(int i=0; a[i]!='\0';i++){
        a[i]^=32;
    }
        return a;
}


int main() {
    char str[] = "CheRrY";
    printf("Original string: %s\n", str);
    printf("Toggle case: %s\n", toggleCase(str));
        
    
    return 0;
}
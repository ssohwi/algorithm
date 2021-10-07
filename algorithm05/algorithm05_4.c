#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    char *S = "K1KA5CB7";
	char *arr = malloc(sizeof(char) * 10000);
	char c[1];
    int val = 0;
    char temp;

    for(int i = 0; i< strlen(S); i++) {
        char ch = S[i];
        if(ch >= 65 && ch <= 90) {
            c[0] = S[i];
	        strcat(arr, c);
        }
        else {
            val += S[i] - '0';
        }
    }
        
    // 문자열
    for (int i = 0; i < strlen(arr); i++) {
		for (int j = 0; j < strlen(arr) - i - 1 ; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
        
    // 출력 
    for(int i = 0; i < strlen(arr); i++) {
        printf("%c", arr[i]);
    }
    if(val != 0) {
        printf("%d", val);
    }
    free(arr);
}
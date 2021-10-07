#include <stdio.h>

int check(int h, int m, int s) {
    if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3){
        return 1;
    }
    return 0;
}


int main() {
    // 입력
	int cnt=0, N;
	scanf("%d", &N);
    
    for(int h=0; h<=N; h++) {
        for(int m=0; m<60; m++) {
            for(int s=0; s<60; s++) {
                if(check(h,m,s)){
                    cnt++;
                }
            }
        }
    }
    // 출력
    printf("%d", cnt); 
}
#include <stdio.h>

int main() {
    // 입력
	int x=1, y=1, N;
	scanf("%d", &N);
	char plans[] = {'R', 'R', 'R', 'U', 'D', 'D'};
    int nx = 0, ny = 0; 
    int dx[] = {0, 0, -1, 1}; 
    int dy[] = {-1, 1, 0, 0}; 
    char direc[] = {'L', 'R', 'U', 'D'};
    
    for (int i = 0; i < sizeof(plans); i++) {
            char plan = plans[i];
            for (int j = 0; j < 4; j++) { 
                if (plan == direc[j]) { 
                    nx = x + dx[j]; 
                    ny = y + dy[j]; 
                } 
            } 
            // 벗어난 경우
            if (nx<1 || ny<1 || nx>N || ny>N) {
                continue;
            }
            // 이동
            x = nx; 
            y = ny; 
        } 
        // 출력
        printf("%d %d", x, y); 
}
#include <stdio.h>

int main() {
    // 입력
    char place[2];
    scanf("%s", place);
	int x = place[1] - '0';
    int y = place[0] - 'a' + 1;
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
	int cnt=0;
    int nx, ny;
    
    for(int i = 0; i< 8; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if(1 <= nx && nx <= 8 && 1 <= ny && ny <= 8 ){
            cnt += 1;
        }
    }
    // 출력
    printf("%d", cnt); 
}
#include <stdio.h>

int n, m;
int graph[1000][1000];

int dfs(int y, int x) {
    if (y <= -1 || y >=n || x <= -1 || x >= m) {
        return 0;
    }
    
    if (graph[y][x] == 0) {

        graph[y][x] = 1;
        dfs(y - 1, x);
        dfs(y, x - 1);
        dfs(y + 1, x);
        dfs(y, y + 1);
        return 1;
    }
    return 0;
}

void main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &graph[i][j]);
        }
    }
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dfs(i, j)) {
                result += 1;
            }
        }
    }
    printf("%d", result);
}
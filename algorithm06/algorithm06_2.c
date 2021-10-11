#include <stdio.h>

int visited[9];
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};
int queue[1000];
int start=0, end=0;

void push(int x) {
    queue[end] = x;
    end++;
}

void pop() {
    start++;
}

int isEmpty() {
    if(start == end) {
        return 1;
    } else {
        return 0;
    }
}

void dfs(int x) {
    push(x);
    visited[x] = 1;
    while(!isEmpty()) {
        x = queue[start];
        printf("%d ", queue[start]);
        pop();
        for (int i = 0; i < 3 && graph[x][i] != 0; ++i) {
            if (!visited[graph[x][i]]) {
                push(graph[x][i]);
                visited[graph[x][i]] = 1;
            }
        }
    }
}

void main() {
    dfs(1);
}
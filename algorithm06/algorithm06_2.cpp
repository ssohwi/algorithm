#include <iostream>
#include <queue>

using namespace std;

bool visited[9];
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};
void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int i = 0; i < 3 && graph[x][i] != 0; ++i) {
            if (!visited[graph[x][i]]) {
                q.push(graph[x][i]);
                visited[graph[x][i]] = true;
            }
        }
    }   
}
int main(void) {
    bfs(1);
}
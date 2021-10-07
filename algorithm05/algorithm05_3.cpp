#include <iostream>
using namespace std;

string place;

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main(void) {
    // 입력
    cin >> place;
    int x = place[1] - '0';
    int y = place[0] - 'a' + 1;
    int cnt = 0;
    
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8) {
            cnt += 1;
        }
    }
    
    // 출력
    cout << cnt << '\n';
    return 0;
}
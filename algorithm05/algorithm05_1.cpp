#include <iostream>
using namespace std;

int N;
string plans;
int x = 1, y = 1;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char direc[4] = {'L', 'R', 'U', 'D'};


int main(void) {
    // 입력
    cin >> N;
    cin.ignore();
    getline(cin, plans);
    
    for (int i = 0; i < plans.size(); i++) {
        char plan = plans[i];
        
        int nx = -1, ny = -1;
        for (int j = 0; j < 4; j++) {
            if (plan == direc[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        // 벗어난 경우
        if (nx < 1 || ny < 1 || nx > N || ny > N) 
        continue;
        // 이동
        x = nx;
        y = ny;
    }
    // 출력
    cout << x << ' ' << y << '\n';
    return 0;
}
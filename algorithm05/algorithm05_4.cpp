#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string S;
vector<char> arr;
int val = 0;

int main(void) {
    // 입력
    cin >> S;
    
    for (int i = 0; i < S.size(); i++) {
        if (isalpha(S[i])) {
            arr.push_back(S[i]);
        }
        else {
            val += S[i] - '0';
        }
    }
    
    // 문자열
    sort(arr.begin(), arr.end());
    
    // 출력
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }
    if (val != 0) {
        cout << val;
    }
}
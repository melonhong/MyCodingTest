#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int t[501][501], s[501][501]; // 삼각형 정수를 저장하는 배열과 합을 저장하는 배열
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> t[i][j]; // i = 1, j = 1이면 1번째 줄의 1번째 원소를 뜻함
        }
    }
    
    s[1][1] = t[1][1]; // 초기화
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) { // 가장 왼쪽의 원소인 경우 -> 전의 줄의 가장 왼쪽 원소
                s[i][j] = s[i - 1][j] + t[i][j];
            } else if (j == i) { // 가장 오른쪽의 원소인 경우 -> 전의 줄의 가장 오른쪽 원소
                s[i][j] = s[i - 1][j - 1] + t[i][j];
            } else { // 전의 줄의 양 대각선의 원소를 비교(이 원소들은 합을 뜻함)
                    // ex) 3 2 (삼각형 정수가 아니라 합임)
                    //      4 -> 3 + 4 = s에선 7을 저장
                s[i][j] = max(s[i - 1][j - 1], s[i - 1][j]) + t[i][j]; // j는 i에 따라 증가하므로, j + 1이 아니라 j임
            }
        }
    }
    
    cout << *max_element(s[n] + 1, s[n] + n + 1);
    return 0;
}
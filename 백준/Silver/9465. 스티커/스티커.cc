#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n;
        cin >> n;
        int s[2][100000], ans[2][100000] = {0}; // ans 배열을 0으로 초기화
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> s[i][j];
            }
        }
        
        // 초기화
        ans[0][0] = s[0][0];
        ans[1][0] = s[1][0];

        if (n > 1) {
            ans[0][1] = ans[1][0] + s[0][1]; // 대각선 방향 원소와 더하기
            ans[1][1] = ans[0][0] + s[1][1]; // 대각선 방향 원소와 더하기
        }

        // 점화식 적용
        for (int i = 2; i < n; i++) {
            ans[0][i] = max(ans[1][i - 1], ans[1][i - 2]) + s[0][i];
            ans[1][i] = max(ans[0][i - 1], ans[0][i - 2]) + s[1][i];
        }

        cout << max(ans[0][n - 1], ans[1][n - 1]) << '\n';
    }

    return 0;
}

#include <iostream>
using namespace std;

const int MAX = 128;
int g[MAX][MAX];
int cntW = 0, cntB = 0;

void color(int x, int y, int length) {
    // 인덱스 범위 내 색상이 모두 같은지 체크
    bool isDifferent = false;
    bool isBlue = g[x][y];
    for (int i = x; i < x + length && !isDifferent; i++) {
        for (int j = y; j < y + length && !isDifferent; j++) {
            if (g[i][j] != g[x][y]) {
                isDifferent = true;
            }   
        }
    }
    
    // 색상이 다르다면 재귀호출하고 아니라면 해당 색상의 cnt를 증가
    if (isDifferent) {
        length /= 2;
        color(x, y, length); // 왼쪽 상단
        color(x + length, y, length); // 오른쪽 상단
        color(x, y + length, length); // 왼쪽 하단
        color(x + length, y + length, length); // 오른쪽 하단
    } else {
        if (isBlue) {
            cntB++;
        } else {
            cntW++;
        }
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }
    
    color(0, 0, n);
    cout << cntW << '\n';
    cout << cntB << '\n';

    return 0;
}
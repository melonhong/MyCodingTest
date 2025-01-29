#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double cnt[4];
    cnt[0] = (a / c) + (b / d); // 0번 회전
    cnt[1] = (c / d) + (a / b); // 1번 회전
    cnt[2] = (d / b) + (c / a); // 2번 회전
    cnt[3] = (b / a) + (d / c); // 3번 회전
    
    int maxi = 0;
    double max = cnt[maxi];
    for (int i = 1; i < 4; i++) { // 가장 큰 값 찾기
        if (max < cnt[i]) {
            max = cnt[i];
            maxi = i;
        }
    }
    
    cout << maxi;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cin.ignore();
    vector<int> c(n);
    
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    int cnt = 0; // 동전 개수
    for (int i = n - 1; i >= 0; i--) { // 큰 금액의 동전부터 시작
        if (k == 0) break; // k가 0이라면 그만두기
        if (c[i] <= k) { // 동전 금액이 k보다 작다면
            cnt += k / c[i]; // 동전 개수에 k를 동전 단위로 나누고
            k %= c[i]; // k는 동전 단위로 나눈 나머지로 만들기
        }
    }
    
    cout << cnt;

    return 0;
}
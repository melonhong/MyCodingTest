#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n); // 수열
    vector<int> dp(n, 1); // 수열의 i번째 원소를 마지막으로 하는 가장 긴 수열의 길이를 저장
    // ex) {1, 4, 2, 3} -> dp = {1, 1, 2, 3}이 되어야 함
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) // 증가 조건
                dp[i] = max(dp[i], dp[j] + 1); // 현재 dp[i]와 전에 저장해둔 dp[j]에 1을 더한 것을 비교(+1은 이번 숫자를 포함한 길이)
        }
    }
    
    cout << *max_element(dp.begin(), dp.end());

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000000;
    int x;
    cin >> x;
    
    int dp[SIZE + 1];
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    
    for (int i = 4; i <= SIZE; i++) {
        dp[i] = dp[i - 1] + 1; // i를 1로 만드는 연산은 (i에서 1을 뺀 연산 + i - 1의 연산 횟수)가 최소라고 미리 생각
        if (i % 2 == 0) {
            if (dp[i] > dp[i / 2] + 1) { // 2의 배수 연산이 i - 1 연산보다 더 작은 경우
                dp[i] = dp[i / 2] + 1; // 만약 i가 2의 배수라면 (i에서 2를 나눈 연산 + i / 2의 연산 횟수)
            }
        }
        if (i % 3 == 0) {
            if (dp[i] > dp[i / 3] + 1) { // 3의 배수 연산이 i - 1 연산보다 더 작은 경우
                dp[i] = dp[i / 3] + 1; // 만약 i가 3의 배수라면 (i에서 3을 나눈 연산 + i / 3의 연산 횟수)가 최소
            }
        }
    }
    
    cout << dp[x];
    
    return 0;
}

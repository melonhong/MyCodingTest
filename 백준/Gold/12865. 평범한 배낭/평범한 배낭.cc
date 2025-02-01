#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<pair<int, int>> item(n); // weight, value
    vector<int> dp(k + 1, 0); // 각 인덱스는 배낭의 현재 무게, 각 값은 현재 무게를 기준으로한 최대 가치
    
    for (int i = 0; i < n; i++) {
        cin >> item[i].first >> item[i].second;
    }
    
    for (int i = 0; i < n; i++) { // 각 아이템을 선별하여 현재 배낭의 무게를 기준으로 최대 가치 갱신
        int weight = item[i].first;
        int value = item[i].second;
        for (int j = k; j >= weight; j--) { // 중복을 피하기 위해 감소하는 순으로
            dp[j] = max(dp[j], dp[j - weight] + value); // 예를 들어 j = 5, weight = 3이고 (5, 6) (3, 2)인 아이템이 있다
            // dp[5] = 6 ?? dp[5-3] + 2 => dp[5] 택
            // 여기서 dp[5-3]은 dp[2]를 뜻함
            // 즉 무게가 3인 물품과 무게가 2인 물품의 가치를 합한 것(하지만 후자는 없으므로 0)
            // dp[5] 뿐만 아니라 다른 모든 값들도 이러한 과정을 거쳐 최대 가치가 갱신될 수 있음 
        }
    }
    
    cout << dp[k]; // 정답 벡터에서 가장 큰 답을 출력

    return 0;
}
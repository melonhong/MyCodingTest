#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<long> v(n); // 숫자와 숫자의 순서를 저장하는 벡터
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<long> ans(v); // 중복된 값을 지우고 오름차순으로 정렬한 벡터
    sort(ans.begin(), ans.end());
    // 1. ans.unique로 중복된 값을 제거 ex) {1, 2, 3, 3, 4, 4, 5} -> {1, 2, 3, 4, 5, 4, 5} (원래 벡터의 값은 남아있음)
    // 2. ans.unique의 반환값부터 끝까지 제거 ex) {1, 2, 3, 4, 5, 4, 5}의 경우 반환값이 인덱스 5부터 끝까지
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    
    for (const auto& val : v) {
        auto it = lower_bound(ans.begin(), ans.end(), val); // ans에서 v의 값을 찾음(find보다 빠르다)
        cout << distance(ans.begin(), it) << ' '; // distance로 it의 요소와 시작점 사이의 거리를 반환
    }

    return 0;
}
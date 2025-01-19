#include <iostream>
using namespace std;

int main() {
    const int MAX = 1000001;
    long long t[MAX];
    
    long long n, m, start = 0, end = 0, result = 0; // 초기값 설정
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i] > end) {
            end = t[i]; // 최대값 갱신
        }
    }
    
    // 이분 탐색
    while (start <= end) {
        long long mid = (start + end) / 2;
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (t[i] > mid) { // 나무 높이가 mid보다 큰 경우만 계산
                sum += t[i] - mid;
            }
        }
        
        if (sum >= m) { // 나무 길이가 충분한 경우(mid가 정답 이하)
            result = mid;
            start = mid + 1;
        } else { // 나무 길이가 부족한 경우(mid가 정답 초과)
            end = mid - 1;
        }
    }

    cout << result;
    return 0;
}

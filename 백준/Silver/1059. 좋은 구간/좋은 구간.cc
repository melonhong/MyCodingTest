#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int l, n;
    cin >> l;
    
    vector<int> s(l);
    
    for (int i = 0; i < l; i++) {
        cin >> s[i];
    }
    
    cin >> n;
    
    sort(s.begin(), s.end());
    
    int loweri = lower_bound(s.begin(), s.end(), n) - s.begin() - 1;
    int lower = s[loweri] + 1; // s에 포함된 수 중 n과 가까우면서 n보다 작은 값 + 1 => 시작 경계
    int upperi = upper_bound(s.begin(), s.end(), n) - s.begin();
    int upper = s[upperi] - 1; // s에 포함된 수 중 n과 가까우면서 n보다 큰 값 - 1 => 끝 경계
    
    if (binary_search(s.begin(), s.end(), n)) { // n이 s에 포함되어 있는 경우
        cout << 0;
        return 0;
    }
    
    int cnt = 0;
    for (int i = lower; i <= n; i++) {
        for (int j = i + 1; j <= upper; j++) {
            if (i <= n && n <= j) { // n이 범위에 포함될 때만 cnt 증가시킴
                cnt++;
            }
        }
    }
    
    cout << cnt;

    return 0;
}
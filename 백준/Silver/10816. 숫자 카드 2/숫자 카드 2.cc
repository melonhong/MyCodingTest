#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    const int ARR_SIZE = 500000;
    int n, m;
    cin >> n;
    int a[ARR_SIZE], b[ARR_SIZE];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(a, a + n);
    
    for (int i = 0; i < m; i++) { // 찾는 수를 초과하는 수의 인덱스 - 찾는 수의 이상인 인덱스
        cout << upper_bound(a, a + n, b[i]) - lower_bound(a, a + n, b[i]) << " ";
    }
    
    return 0;
}
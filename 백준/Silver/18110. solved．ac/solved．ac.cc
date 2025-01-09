#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    float m = round(n * 0.15);
    int a[300000] = { 0 };
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    for (int i = m; i < n - m; i++) {
        sum += a[i];
    }
    
    cout << round(sum / (n - 2 * m));

    return 0;
}
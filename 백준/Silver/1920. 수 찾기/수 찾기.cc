#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        if (binary_search(a, a + n, q)) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    
    delete [] a;
    
    return 0;
}
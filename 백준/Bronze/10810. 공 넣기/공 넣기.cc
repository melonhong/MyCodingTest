#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    
    int a[n] = {0, };
    
    for (; m > 0; m--) {
        int i, j, k;
        cin >> i >> j >> k;
        
        for (; i <= j; i++) a[i - 1] = k;
    }
    
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    
    return 0;
}
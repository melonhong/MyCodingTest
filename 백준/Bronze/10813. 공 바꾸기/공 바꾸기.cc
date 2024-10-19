#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    
    int a[n];
    
    // initialize array
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    
    
    // switch ist and jst number
    while (m-- > 0) {
        int i, j, t;
        cin >> i >> j;
        
        t = a[i - 1];
        a[i - 1] = a[j - 1];
        a[j - 1] = t;
    }
    
    // print array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
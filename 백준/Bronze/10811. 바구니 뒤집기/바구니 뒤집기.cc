#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
   
    // initialize array
    int a[n];
    for (int i = 0; i < n; i++) a[i] = i + 1;
    
    // reverse array
    while (m-- > 0) {
        int i, j;
        cin >> i >> j;
        
        for (; i < j; i++, j--) {
            int t = a[i - 1];
            a[i - 1] = a[j - 1];
            a[j - 1] = t;
        }
    }
    
    // print array
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    
    return 0;
}
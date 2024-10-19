#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int t = a[0], b = a[0];
    
    for (int i = 0; i < n; i++) {
        if (a[i] > t) {
            t = a[i];
        } else if (a[i] < b) {
            b = a[i];
        }
    }
    
    printf("%d %d", b, t);
    
    return 0;
}
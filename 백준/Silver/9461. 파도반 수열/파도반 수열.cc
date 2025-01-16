#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int t;
    cin >> t;
    
    long a[MAX];
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    
    for (int i = 4; i <= MAX; i++) {
        a[i] = a[i - 3] + a[i - 2];
    }
    
    while (t-- > 0) {
        int n;
        cin >> n;
        cout << a[n] << '\n';
    }

    return 0;
}
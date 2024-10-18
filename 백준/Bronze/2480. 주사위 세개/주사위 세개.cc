#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n[3];
    int m, s = 0, c = 0;
    for (int i = 0; i < 3; i++) cin >> n[i];
    sort(n, n + 3);

    for (int i = 0; i < 2; i++) {
        if (n[i] == n[i+1]) {
            s = n[i];
            c++;
        }
    }
    
    if (c == 2) {
        m = 10000 + s * 1000;
    } else if (c == 1) {
        m = 1000 + s * 100;
    } else {
        m = n[2] * 100;
    }

    cout << m;
    return 0;
}
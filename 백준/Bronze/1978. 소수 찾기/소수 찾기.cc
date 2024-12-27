#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, a, cnt = 0;
    bool isPrime;
    cin >> n;
    for (int i = 0; i < n; i++) {
        isPrime = true;
        cin >> a;
        if (a == 1) continue;
        
        for (int j = 2; j <= sqrt(a); j++) {
            if ((a % j) == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}
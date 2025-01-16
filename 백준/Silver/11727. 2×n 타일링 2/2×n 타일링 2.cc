#include <iostream>
using namespace std;

int main() {
    const int MAX = 1000;
    int a[MAX];
    a[1] = 1;
    a[2] = 3;
    
    for (int i = 3; i <= MAX; i++) {
        a[i] = (a[i - 1] + a[i - 2] * 2) % 10007;
    }
    
    int n;
    cin >> n;
    cout << a[n];

    return 0;
}
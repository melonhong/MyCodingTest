#include <iostream>
using namespace std;

int main() {
    const int ARR_SIZE = 9;
    int a[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) cin >> a[i];
    
    int mi = 0;
    int m = 0;
    
    for (int i = 0; i < ARR_SIZE; i++) {
        if (a[i] > m) {
            m = a[i];
            mi = i + 1;
        }
    }
    
    cout << m << endl;
    cout << mi << endl;
    
    return 0;
}
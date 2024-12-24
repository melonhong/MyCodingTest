#include <iostream>
using namespace std;

int main() {
    int a, b;
    int i = 0;
    int k[128];
    
    cin >> a >> b;
    
    while (a > 0) {
        k[i++] = a % b;
        a /= b;
    }
    
    for (int j = i - 1; j >= 0 ; j--) {
        if (k[j] < 10) {
            cout << k[j];
        } else {
            cout << (char) (k[j] + 55);
        }
    }
    return 0;
}
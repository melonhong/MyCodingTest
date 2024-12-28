#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int r = 31;
    const int M = 1234567891;
    
    int l;
    cin >> l;
    
    int* s = new int[l];
    for (int i = 0; i < l; i++) {
        char c;
        cin >> c;
        s[i] = (int) c - 'a' + 1;
    }
    
    double sum = 0;
    for (int i = 0; i < l; i++) {
        sum += s[i] * pow(r, i);
    }
    
    cout.precision(0);
    cout << fixed << sum;
	return 0;
}
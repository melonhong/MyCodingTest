#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int ARR_SIZE = 5; 
    int a[ARR_SIZE], b[ARR_SIZE];
    int sum = 0;
    for (int i = 0; i < ARR_SIZE; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < ARR_SIZE; i++) {
        b[i] = pow(a[i], 2);
        sum += b[i];
    }
    
    cout << sum % 10;
    
    return 0;
}
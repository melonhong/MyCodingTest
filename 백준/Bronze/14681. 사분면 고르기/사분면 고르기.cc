#include <iostream>
using namespace std;

int main() {
    int x, y, r;
    cin >> x >> y;
    
    if (x > 0) {
        r = y > 0 ? 1 : 4;
    } else {
        r = y > 0 ? 2 : 3;
    }
    
    cout << r;
    return 0;
}
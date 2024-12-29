#include <iostream>
using namespace std;

int people(int k, int n) {
    if (k == 0) {
        return n;
    } else if (n == 1) {
        return 1;
    } else {
        int p = people(k, n - 1) + people(k - 1, n);
        return p;
    }
}

int main() {
    int t, k, n;
    cin >> t;
    
    while (t-- > 0) {
        cin >> k >> n;
        
        cout << people(k, n) << endl;
    }
    
	return 0;
}
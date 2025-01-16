#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX = 11;
    int t;
    cin >> t;
    
    vector<int> v(MAX);
    v[1] = 1;
    v[2] = 2;
    v[3] = 4;
    
    for (int i = 4; i <= MAX; i++) {
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
    }
    
    while (t-- > 0) {
        int n;
        cin >> n;
        cout << v[n] << '\n';
    }

    return 0;
}
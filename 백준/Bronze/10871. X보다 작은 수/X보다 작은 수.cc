#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    int a[n];
    vector<int> b;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        if (a[i] < x) b.push_back(a[i]);
    }
    
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    
    return 0;
}
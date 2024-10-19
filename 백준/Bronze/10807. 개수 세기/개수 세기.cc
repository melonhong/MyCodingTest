#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int v, vn;
    cin >> v;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) vn++;
    }
    
    cout << vn;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000000] = { 0 }; // 1000000번째가 0
    
    for (int i = 0; i < n ; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    for (int i = 0; i < n ; i++) { // 가장 큰 값까지만 돎
        printf("%d\n", a[i]);
    }

    return 0;
}
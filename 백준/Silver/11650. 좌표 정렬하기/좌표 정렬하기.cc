#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> a[1000000];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a, a + n);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", a[i].first, a[i].second);
    }

    return 0;
}
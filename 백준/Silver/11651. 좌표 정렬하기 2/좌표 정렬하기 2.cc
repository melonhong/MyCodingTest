#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int comp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

int main() {
    int n;
    cin >> n;
    pair<int, int> a[1000000];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a, a + n, comp);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", a[i].first, a[i].second);
    }

    return 0;
}
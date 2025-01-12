#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<int, int>> p; // 필요한 시간, 번호
    
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        p.push_back({ a, i });
    }
    sort(p.begin(), p.end());
    int last = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        last += p[i].first;
        sum += last;
    }
    cout << sum;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    const int MAX = 100000;
    int n, m;
    cin >> n >> m;
    
    int a[MAX + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        a[i] = a[i - 1] + num;
    }
    
    while (m-- > 0) {
        int p, q;
        cin >> p >> q;
        cout << a[q] - a[p - 1] << '\n';
    }

    return 0;
}
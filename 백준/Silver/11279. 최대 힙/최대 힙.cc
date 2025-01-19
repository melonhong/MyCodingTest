#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int> h;
    int n;
    cin >> n;
    
    while (n-- > 0) {
        int x;
        cin >> x;
        
        if (x != 0) {
            h.push(x);
        } else {
            if (h.empty()) {
                cout << 0 << '\n';
            } else {
                cout << h.top() << '\n';
                h.pop();
            }
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    cin.ignore(1000, '\n');
    string cmd;
    int s = 0;
    
    while (n-- > 0) {
        cin >> cmd;
        if (cmd == "add") {
            int a;
            cin >> a;
            s = s | 1 << a;
        } else if (cmd == "remove") {
            int a;
            cin >> a;
            s = s & ~(1 << a);
        } else if (cmd == "check") {
            int a;
            cin >> a;
            cout << ((s & (1 << a)) ? 1 : 0) << '\n';
        } else if (cmd == "toggle") {
            int a;
            cin >> a;
            s = s ^ (1 << a);
        } else if (cmd == "all") {
            s = (1 << 21) - 1;
        } else {
            s = 0;
        }
    }

    return 0;
}
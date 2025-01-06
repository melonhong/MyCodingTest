#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore(1000,'\n');
    
    while (t-- > 0) {
        stack<char> c;
        bool flag = false;
        getline(cin, s);
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                c.push(s[i]);
            } else if (!c.empty() && s[i] == ')') {
                c.pop();
            } else {
                flag = true;
                break;
            }
        }
        
        if (!flag && c.empty()) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
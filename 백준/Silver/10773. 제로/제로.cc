#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k;
    stack<int> s;
    cin >> k;
    cin.ignore(1000, '\n');
    
    while (k-- > 0) {
        int a;
        cin >> a;
        if (a == 0 && !s.empty()) {
            s.pop();
        } else {
            s.push(a);
        }
    }
    
    
    int i = s.size(), sum = 0;
    while (i-- > 0) {
        sum += s.top();
        s.pop();
    }
    
    cout << sum;
    
    return 0;
}
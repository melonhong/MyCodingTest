#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack {
public:
    vector<int> s;
    void push(int a) {
        s.push_back(a);
    };
    int pop() {
      int pop;
      if (s.empty()) {
        pop = -1;
      } else {
        pop = s.back();
        s.pop_back();
      }
      return pop;
    };
    int size() {
        return s.size();
    };
    int empty() {
        return s.empty();
    };
    int top() {
        int back = s.empty() ? -1 : s.back();
        return back;
    };
};

int main() {
    Stack mystack;
    int n, a;
    string cmd;
    cin >> n;
    cin.ignore(1000, '\n');
    
    while (n-- > 0) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> a;
            mystack.push(a);
        } else if (cmd == "pop") {
            cout << mystack.pop() << '\n';
        } else if (cmd == "size") {
            cout << mystack.size() << '\n';
        } else  if (cmd == "empty") {
            cout << mystack.empty() << '\n';
        } else {
            cout << mystack.top() << '\n';
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Queue {
public:
    vector<int> q;
    void push(int a) {
        q.push_back(a);
    };
    int pop() {
      int pop;
      if (q.empty()) {
        pop = -1;
      } else {
        pop = q.front();
        q.erase(q.begin());
      }
      return pop;
    };
    int size() {
        return q.size();
    };
    int empty() {
        return q.empty();
    };
    int front() {
        int front = q.empty() ? -1 : q.front();
        return front;
    };
    int back() {
        int back = q.empty() ? -1 : q.back();
        return back;
    };
};

int main() {
    Queue myQueue;
    int n, a;
    string cmd;
    cin >> n;
    cin.ignore(1000, '\n');
    
    while (n-- > 0) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> a;
            myQueue.push(a);
        } else if (cmd == "pop") {
            cout << myQueue.pop() << '\n';
        } else if (cmd == "size") {
            cout << myQueue.size() << '\n';
        } else  if (cmd == "empty") {
            cout << myQueue.empty() << '\n';
        } else if (cmd == "front") {
            cout << myQueue.front() << '\n';
        } else {
            cout << myQueue.back() << '\n';
        }
    }

    return 0;
}
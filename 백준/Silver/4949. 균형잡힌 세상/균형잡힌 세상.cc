#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s;
    
    while (true) {
        getline(cin, s);
        if (s == ".") break; // 종료 조건
        
        stack<char> c; // 스택 초기화
        bool flag = false; // 플래그 초기화
        
        for (char ch : s) {
            if (ch == '(' || ch == '[') {
                c.push(ch);
            } else if (ch == ')') { // 오른쪽 괄호를 만나면 pop
                if (!c.empty() && c.top() == '(') {
                    c.pop();
                } else {
                    flag = true;
                    break;
                }
            } else if (ch == ']') {
                if (!c.empty() && c.top() == '[') {
                    c.pop();
                } else {
                    flag = true;
                    break;
                }
            }
        }
        
        // 결과 출력
        if (!flag && c.empty()) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    
    vector<char> ans;
    stack<int> s;
    bool isValid = true;
    s.push(0);
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        while (s.top() < num) { // 스택의 top과 num이 같아질 때까지 push
            s.push(cnt++);
            ans.push_back('+');
        }
        if (s.top() == num) { // 스택의 top과 num이 같아지면 pop
            s.pop();
            ans.push_back('-');
        } else { // 다른 경우 NO를 출력
            isValid = false;
        }
    }
    
    if (isValid) {
        for (auto c : ans) {
            printf("%c\n", c);
        }
    } else {
        printf("NO");
    }
    
    return 0;
}

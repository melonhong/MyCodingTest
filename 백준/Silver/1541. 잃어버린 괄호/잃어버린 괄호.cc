#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string num;
    int sum = 0;
    bool isMinus = false;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == '-' || s[i] == '+' || i == s.length()) {
            // 연산자를 만났을 때 -> num에 저장해둔 값을 sum에 더하거나 뺌
            // 즉, 연산자 전의 피연산자를 sum에 더하거나 뺀다
            if (isMinus) {
                sum -= stoi(num);
                num = "";
            } else {
                sum += stoi(num);
                num = "";
            }
        } else {
            // 숫자를 만났을 때 -> num에 저장해둠
            num += s[i];
        }
        
        if (s[i] == '-') {
            // -를 만났을 때 플래그를 true
            // 최솟값을 구하면 되니까 플래그를 고칠 필요 없음
            isMinus = true;
        }
    }
    
    cout << sum;

    return 0;
}
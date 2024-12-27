#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int s2 = stoi(s), s3 = stoi(s), m = 0, result = 0;
    
    // s의 자릿 수 세기기
    while (true) {
        m++;
        s2 /= 10;
        if (s2 == 0) break;
    }
    
    // 범위 내 숫자가 생성자인 지 확인
    for (int i = s3 - 9 * m; i <= s3 ; i++) {
        int sum = i;
        string ss = to_string(i);
        
        for (int j = 0; j < ss.length(); j++) {
            sum += (int) ss[j] - '0';
        }
        
        if (sum == s3) {
            result = i;
            break;
        }
    }
    
    cout << result;
    return 0;
}
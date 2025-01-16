#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    const int MAX = 30;
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n;
        cin >> n;
        map<string, int> m; // 의상 종류(type)와 해당하는 종류의 의상 수
        int cnt = 1;
        
        for (int i = 0; i < n; i++) {
            string fashion, type;
            cin >> fashion >> type;
            
            if (m.find(type) != m.end()) { // m에 해당하는 종류의 의상이 있을 경우
                m[type]++; // 그 종류의 의상의 수를 증가
            } else {
                m[type] = 1; // 없을 경우엔 1로 초기화
            }
        }
        
        auto iter = m.begin();
        for (; iter != m.end(); iter++) { // m을 처음부터 끝까지 탐색
            cnt *= (iter->second + 1); // cnt에 (각 종류의 의상 수 + 1)을 곱해줌, 1을 더해준 이유는 그 종류의 의상을 안 입을 수도 있어서
        }
        
        cout << cnt - 1 << endl; // 아무것도 안 입은 경우는 제외
    }

    return 0;
}
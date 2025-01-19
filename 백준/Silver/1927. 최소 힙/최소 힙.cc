#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin >> n;
    
    priority_queue<int, vector<int>, greater<int>> h; // 최소 힙 템플릿: <자료형, 데이터가 들어갈 컨테이너, 비교 기준>
    
    while (n-- > 0) {
        int x;
        cin >> x;
        
        if (x != 0) { // x가 자연수라면 힙에 넣기
            h.push(x);
        } else {
            if (h.empty()) { // 힙이 비어있다면 0 출력
                cout << 0 << '\n';
            } else { // 힙의 루트를 반환하고 pop
                cout << h.top() << '\n';
                h.pop();
            }
        } 
    }

    return 0;
}
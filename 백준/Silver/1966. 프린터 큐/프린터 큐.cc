#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        queue<pair<int, int>> q; // { index, priority }, 입력 순서와 우선순위를 저장함
        priority_queue<int> pq; // 우선순위를 기준으로 출력 순서를 저장함
        
        int n, m, cnt = 0;
        cin >> n >> m;
            
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            q.push({ i, a });
            pq.push(a);
        }
        
        while (!pq.empty()) {
            int index = q.front().first, priority = q.front().second;
            q.pop();
            if (pq.top() == priority) { // pq의 top과 q의 front의 우선순위가 일치하면 pq를 pop
                pq.pop();
                cnt++; // m번째 요소의 출력 순서 증가
                if (index == m) { // q의 front의 인덱스까지 m과 일치하면 결과를 출력
                    cout << cnt << '\n';
                    break;
                }
            } else {
                q.push({ index, priority }); // pq의 top과 q의 front의 우선순위가 다르면 q의 front를 다시 맨 뒤로 push
            }
        }
    } 
	return 0;
}
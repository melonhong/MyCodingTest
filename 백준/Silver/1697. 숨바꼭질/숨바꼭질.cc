#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100001;
queue<pair<int, int>> q; // position, time
                        // 하나의 노드에서 여러 곳으로 이동할 때 같은 시간을 저장해줘야 하므로 이렇게 표현 
bool visited[MAX] = {};

int main() {
    int n, k;
    cin >> n >> k;
    visited[n] = true;
    q.push(make_pair(n, 0)); // 시작 위치를 큐에 삽입
    
    while (!q.empty()) { // BFS 시작
        int pos = q.front().first; // 현재 위치
        int cnt = q.front().second; // 걸린 시간
        q.pop();
        
        if (k == pos) { // 도착한 경우
            cout << cnt;
            break;
        } 
        if (pos + 1 >= 0 && pos + 1 <= MAX) { // 현재 위치에서 앞으로 한 칸 이동
            if (!visited[pos + 1]) {
                visited[pos + 1] = true;
                q.push(make_pair(pos + 1, cnt + 1));
            }
        }
        if (pos - 1 >= 0 && pos - 1 <= MAX) { // 현재 위치에서 뒤로 한 칸 이동
            if (!visited[pos - 1]) {
                visited[pos - 1] = true;
                q.push(make_pair(pos - 1, cnt + 1));
            }
        }
        if (pos * 2 >= 0 && pos * 2 <= MAX) { // 현재 위치에서 순간이동
            if (!visited[pos * 2]) {
                visited[pos * 2] = true;
                q.push(make_pair(pos * 2, cnt + 1));
            }
        }
        cnt++;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> g[1001]; // 벡터 배열
bool visited[1001];

void dfs(int s) {
    visited[s] = true;
    cout << s << " ";
    for (int i : g[s]) {
        if (!visited[i]) dfs(i);
    }
}

void bfs(int s) {
    queue<int> q;
    q.push(s);        // 시작 노드를 큐에 추가
    visited[s] = true; // 시작 노드 방문 처리

    while (!q.empty()) {
        int temp = q.front();
        q.pop();       // 큐에서 노드를 꺼냄
        cout << temp << " "; // 현재 노드 출력

        for (int i : g[temp]) {
            if (!visited[i]) {
                q.push(i);    // 방문하지 않은 인접 노드 큐에 추가
                visited[i] = true; // 방문 처리
            }
        }
    }
}

int main() {
    int n, m, v;
    cin >> n >> m >> v;
    
    while (m-- > 0) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++) {
        sort(g[i].begin(), g[i].end());
    }
    
    dfs(v);
    cout << '\n';
    fill(visited, visited + n + 1, false); // visited 초기화
    bfs(v);

    return 0;
}

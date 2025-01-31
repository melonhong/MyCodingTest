#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n;
vector<int> tree[100001]; // 트리의 간선 구조: 각 노드별로 연결된 노드 표시
int parent[100001]; // 트리의 위계 질서: 각 노드의 부모를 저장

void bfs(int root) {
    queue<int> q;
    q.push(root);
    parent[root] = 0;
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for (auto child : tree[cur]) {
            if (parent[child] == 0) { // 아직 부모가 정해지지 않은 노드라면
                q.push(child); // 큐에 노드를 넣고
                parent[child] = cur; // 부모를 현재 탐색 중인 노드로 정함
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    int a, b, last = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    bfs(1); // BFS 시작, 루트는 1
    
    for (int i = 2; i <= n; i++) {
        cout << parent[i] << '\n';
    }
    
    return 0;
}
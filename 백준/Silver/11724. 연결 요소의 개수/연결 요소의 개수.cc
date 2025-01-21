/******************************************************************************
DFS로 탐색하다가 종료되면 visited에서 안 방문한 노드 중 제일 작은거로 다시 DFS

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1001;
vector<int> g[MAX];
bool visited[MAX] = {};

void dfs(int root) {
    visited[root] = true;
    for (auto i : g[root]) {
        if (!visited[i]) dfs(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    while (m-- > 0) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    int cnt = 0, idx;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            dfs(i);
        }
    }
    
    cout << cnt;

    return 0;
}
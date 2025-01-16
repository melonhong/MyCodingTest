#include <iostream>
#include <vector>
using namespace std;

vector<int> g[101]; // 네트워크 연결 정보를 담은 벡터 배열, ex) g[1] = {2, 3}, g[2] = {3, 5, 7}
bool visited[101]; // 방문 여부를 담은 배열
int cnt = 0; // 감염된 컴퓨터의 수

void dfs(int root) { // 깊이 우선 탐색
    cnt++;
    visited[root] = true;
    
    for (int i : g[root]) {
        if (!visited[i]) { // 방문하지 않은 노드에 대해 dfs를 재귀 호출
            dfs(i);  
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        g[b].push_back(a); // g[b] = {..., a}
        g[a].push_back(b); // g[a] = {..., b}
    }
    dfs(1);
    cout << cnt - 1; // 1번 컴퓨터는 제외하고 출력
    
    return 0;
}
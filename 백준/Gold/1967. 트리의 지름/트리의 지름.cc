#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX = 10001; // 최대 노드 수 (문제에서 최대 10,000개까지 주어짐)

// 트리를 인접 리스트로 표현
vector<pair<int, int>> tree[MAX];  // tree[노드번호] = {연결노드, 가중치}
bool visited[MAX];

int maxDist = 0; // 가중치 합
int farthestNode = 0; // 가장 먼 노드

void dfs(int node, int dist) {
    visited[node] = true;
    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = node;
    }
    for (auto& edge : tree[node]) {
        int next = edge.first;
        int weight = edge.second;
        if (!visited[next]) {
            dfs(next, dist + weight);
        }
    }
}

int main() {
    int n;
    cin >> n;

    int startNode = 0, startWeight = 100;
    // 트리 입력 받기 (n-1개의 간선)
    for (int i = 0; i < n - 1; i++) {
        int parent, child, weight;
        cin >> parent >> child >> weight;
        
        if (weight < startWeight) {
            startWeight = weight;
            startNode = child;
        }

        // 양방향 연결
        tree[parent].push_back({child, weight});
        tree[child].push_back({parent, weight});
    }


    // 1차 DFS: 임의의 노드에서 가장 먼 노드 찾기
    memset(visited, false, sizeof(visited));
    dfs(1, 0);

    // 2차 DFS: 찾은 노드에서 가장 먼 노드까지 거리 계산
    memset(visited, false, sizeof(visited));
    maxDist = 0;
    dfs(farthestNode, 0);

    cout << maxDist; // 트리의 지름 출력

    return 0;
}

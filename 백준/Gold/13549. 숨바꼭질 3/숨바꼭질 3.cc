#include <iostream>
#include <queue>
#include <vector>
#include <cstring> // memset 사용
using namespace std;

const int MAX = 100001;
int n, k;
int dijk[MAX]; // dijk[i]는 i번째 위치에 도달하는 최소 시간을 저장

struct cmp {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second; // 최소 힙
    }
};

priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq; // 우선 순위 큐

void dijkstra() {
    memset(dijk, 0x3f, sizeof(dijk)); // 무한대 값으로 초기화
    pq.push({n, 0});
    dijk[n] = 0;

    while (!pq.empty()) {
        int pos = pq.top().first;  // 현재 위치
        int sec = pq.top().second; // 현재까지 걸린 시간
        pq.pop();

        if (pos == k) {
            cout << sec;
            return;
        }

        vector<pair<int, int>> next_moves = {
            {pos - 1, sec + 1},
            {pos + 1, sec + 1},
            {pos * 2, sec}
        };

        for (auto [next, cost] : next_moves) {
            if (next >= 0 && next < MAX && dijk[next] > cost) { // i번째 위치에 저장한 시간보다 현재까지 걸린 시간이 짧다면 값 갱신
                dijk[next] = cost;
                pq.push({next, cost});
            }
        }
    }
}

int main() {
    cin >> n >> k;
    dijkstra();
    return 0;
}

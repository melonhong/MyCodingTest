#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int map[1000][1000];
int visited[1000][1000]; // 0: 방문 안 함, -2: 접근 불가, 나머지는 익은 날

int dx[4] = {-1, 1, 0, 0}; // 상하좌우
int dy[4] = {0, 0, -1, 1};

void bfs(queue<pair<int, int>>& q) {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) { // 범위 체크
                if (visited[nx][ny] == -1 && map[nx][ny] == 0) { // 익지 않은 토마토
                    visited[nx][ny] = visited[x][y] + 1; // 날짜 갱신
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    cin >> m >> n; // 입력 순서 주의: m(열), n(행)

    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 1) {         // 익은 토마토
                q.push({i, j});
                visited[i][j] = 0;        // 시작점은 0일
            } else if (map[i][j] == -1) { // 접근 불가한 칸
                visited[i][j] = -2;
            } else {                      // 익지 않은 토마토
                visited[i][j] = -1;
            }
        }
    }

    bfs(q); // BFS 실행
    
    int d = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 0 && visited[i][j] == -1) { // 익지 않은 토마토가 남아 있음
                cout << -1;
                return 0;
            }
            d = max(d, visited[i][j]); // 최대 날짜 갱신
        }
    }

    cout << d; // 모든 토마토가 익는 데 걸린 최대 날짜 출력
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 50;

int field[MAX][MAX];
bool visited[MAX][MAX];
int dx[] = {-1, 1, 0, 0}; // 상하좌우
int dy[] = {0, 0, -1, 1};

void initialize(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            field[i][j] = 0;
            visited[i][j] = false;
        }
    }
}

void dfs(int x, int y, int n, int m) {
    visited[x][y] = true;

    for (int i = 0; i < 4; i++) { 
        int nx = x + dx[i]; // 현재 x 좌표에서 dx[i] 만큼 이동 (상, 하, 좌, 우)
        int ny = y + dy[i]; // 현재 y 좌표에서 dy[i] 만큼 이동 (상, 하, 좌, 우)
    
        // 이동한 좌표(nx, ny)가 유효한 범위인지 확인
        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            // 이동한 위치에 배추가 존재하고, 아직 방문하지 않은 경우
            if (field[nx][ny] && !visited[nx][ny]) {
                dfs(nx, ny, n, m); // 이동한 좌표에서 다시 DFS 탐색 수행
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;

        initialize(n, m);

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            field[y][x] = 1; // 주의: x와 y의 입력 순서
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (field[i][j] && !visited[i][j]) {
                    dfs(i, j, n, m);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}

#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

int N, M;
int m[MAX][MAX]; // map
int d[MAX][MAX]; // distance
bool visited[MAX][MAX];
queue<pair<int, int>> q;

int dx[4] = {-1, 1, 0, 0}; // 좌우상하
int dy[4] = {0, 0, -1, 1};

void bfs(int startX, int startY) {
    q.push({startX, startY});
    d[startX][startY] = 0;
    visited[startX][startY] = true;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i]; // 다음에 갈 x 좌표
            int ny = y + dy[i]; // 다음에 갈 y 좌표
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) { // 범위 체크
                if (!visited[nx][ny] && m[nx][ny] == 1) { // 방문하지 않았고 갈 수 있는 곳이라면
                    visited[nx][ny] = true;
                    d[nx][ny] = d[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    cin >> N >> M;
    pair<int, int> root;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> m[i][j];
            if (m[i][j] == 2) {
                root = {i, j}; // 시작 지점
            } else if (m[i][j] == 0) {
                d[i][j] = 0; // 이동 불가능한 곳
            } else {
                d[i][j] = -1; // 갈 수 있지만 아직 안 감   
            }
        }
    }
    
    bfs(root.first, root.second);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << d[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, ans;
	int res = 64; //바꿔야 할 수도 있는 칸의 최대값
	char original[50][50]; //기존 판 데이터 저장할 배열
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> original[i][j];
		}
	}
	
	char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};
	
	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};
	
	for (int i = 0; i <= n - 8; i++) { // 8 * 8 크기는 아무데서나 골라도 된다는 조건
		for (int j = 0; j <= m - 8; j++) {
			int cnt_w = 0, cnt_b = 0; // 갯수 초기화
			for (int x = 0; x < 8; x++) { // 기준 체스판 비교 반복문
				for (int y = 0; y < 8; y++) {
					if (original[i + x][j + y] != BW[x][y]) { //BW랑 비교
						cnt_b++;
					}
					if (original[i + x][j + y] != WB[x][y]) { //WB랑 비교
						cnt_w++;
					}
				}
			}
			// 기준 체스판을 기준으로 모두 비교한 다음에 최소값만 기록하기 위해 비교
			ans = cnt_b > cnt_w ? cnt_w : cnt_b;
			res = res >= ans ? ans : res;
		}
	}
	cout << res;
}
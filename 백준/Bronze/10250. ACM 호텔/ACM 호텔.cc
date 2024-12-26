#include <iostream>
using namespace std;

int main() {
    int t;
	scanf("%d", &t);

	int h, w, n, y, x;

	for (int i = 0; i < t; ++i) {
		scanf("%d %d %d", &h, &w, &n);

		x = n / h + 1;
		y = n % h;

        // 만약 꼭대기 층으로 배정될 경우
		if (y == 0) {
			y = h;
			x -= 1;
		}

		printf("%d%02d\n", y, x);   // %d 앞에 02 등을 붙이면 칸 수를 확보 후, 빈 자리에 0을 채워줌줌
	}
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SIZE = 1000000;
    vector<bool> isPrime(SIZE, true);
    isPrime[0] = isPrime[1] = false;
    
    int m, n;
    scanf("%d %d", &m, &n);
    
    // 2부터 n 제곱근까지 제거
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = m; i <= n; i++) {
        if (isPrime[i]) printf("%d\n", i);
    }
	return 0;
}
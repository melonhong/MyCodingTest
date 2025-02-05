#include <iostream>
using namespace std;

// 분할 정복을 이용한 거듭제곱 (빠른 거듭제곱)
long long power(long long a, long long b, long long c) {
    if (b == 1) return a % c; // 기저 사례

    long long half = power(a, b / 2, c); // A^(B/2) 계산

    if (b % 2 == 0) return (half * half) % c; // 짝수인 경우
    else return (((half * half) % c) * a) % c; // 홀수인 경우
}

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    cout << power(A, B, C) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // 진법 변환 방법은 링크를 참조 https://coding-factory.tistory.com/652
    // a는 바꿀 값, b는 바꿀 진수, i는 나눈 횟수, k는 나머지, 즉, 바꾼 값을 담을 배열
    // 그림판으로 그려 놓음
    int a, b;
    int i = 0;
    int k[128];
    
    cin >> a >> b;
    
    while (a > 0) {
        k[i++] = a % b;
        a /= b;
    }
    
    for (int j = i - 1; j >= 0 ; j--) {
        if (k[j] < 10) {
            cout << k[j];
        } else {
            cout << (char) (k[j] + 55);
        }
    }
    return 0;
}

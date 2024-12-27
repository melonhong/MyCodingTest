#include <iostream>
using namespace std;

int main() {
    const int ARR_SIZE = 6;
    int n, t, p;
    int size[ARR_SIZE];
    
    scanf("%d", &n);
    for (int i = 0; i < ARR_SIZE; i++) {
        scanf("%d", &size[i]);
    }
    scanf("%d %d", &t, &p);
    
    int tt = 0; // 티셔츠 묶음 수
    for (int i = 0; i < ARR_SIZE; i++) {
        int x = size[i] / t;
        int y = size[i] % t;
        
        if (y != 0) {
            tt += x + 1;    // t의 배수가 아닐 때
        } else {
            tt += x;    // t의 배수일 때
        }
    }
    
    int pp = n / p; // 펜 묶음 수
    int pi = n % p; // 한 묶음 당 펜 자루
    
    printf("%d\n%d %d", tt, pp, pi);

    return 0;
}
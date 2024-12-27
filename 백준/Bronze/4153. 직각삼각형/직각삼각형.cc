#include <iostream>
using namespace std;

int main() {
    while (1) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;
        int aa = a * a, bb = b * b, cc = c * c;
        
        if (aa == bb + cc) {
            printf("right\n");
        } else if (bb == aa + cc) {
            printf("right\n");
        } else if (cc == bb + aa) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }

    return 0;
}
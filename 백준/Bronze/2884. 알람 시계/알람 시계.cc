#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    m -= 45;

    if (m < 0) {
        m += 60;
        h -= 1;

        if (h < 0) h = 23;
    }

    printf("%d %d", h, m);

    return 0;
}
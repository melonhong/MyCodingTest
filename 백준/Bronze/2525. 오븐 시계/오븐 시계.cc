#include <iostream>
using namespace std;

int main() {
    int h, m, c;
    cin >> h >> m >> c;

    m += c % 60;
    h += c / 60;

    if (m >= 60) {
        m -= 60;
        h += 1;
    }
    if (h >= 24) h -= 24;

    printf("%d %d", h, m);

    return 0;
}
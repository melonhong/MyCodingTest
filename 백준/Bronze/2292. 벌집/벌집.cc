#include <iostream>
using namespace std;

int main() {
    int n, result;
    cin >> n;
    int sum = 0, a = 1;
    while (true) {
        if (a < 3) {
            sum += 1;
        } else {
            int k = 0;
            k += 6 * (a - 2);
            sum += k;
        }
        if (sum > n) {
            result = a - 1;
            break;
        }
        //cout << a++ << " " << sum << endl;
        a++;
    }
    cout << result;
    return 0;
}
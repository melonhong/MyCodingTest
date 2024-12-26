#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cout << setw(a - i + 1);
        for (int j = 1; j <= i; j++) {
            cout << right << '*';
        }
        cout << endl;
    }
    return 0;
}
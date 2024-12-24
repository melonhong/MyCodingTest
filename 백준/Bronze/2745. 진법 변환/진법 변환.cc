#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    int i = 0;
    int a;
    int sum = 0;
    cin >> s >> a;
    
    for (int j = s.length(); j > 0; j--) {
        char c = s[j - 1];
        switch (c) {
           case '0':
           case '1':
           case '2':
           case '3':
           case '4':
           case '5':
           case '6':
           case '7':
           case '8':
           case '9': c -= 48; break;
           default: c -= 55; break;
        }
        int p = pow(a, i++);
        sum += c * p;
    }

    cout << fixed << sum;
    return 0;
}
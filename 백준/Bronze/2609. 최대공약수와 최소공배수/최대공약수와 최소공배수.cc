#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = a < b ? a : b;
    d = a < b ? b : a;
    
    int gcf, lcm;
    
    for (int i = 1; i <= d; i++) {
        if (a % i == 0 && b % i == 0) gcf = i;
    }
    
    for (int i = 1; i <= gcf; i++) {
        lcm = a * b;
        if (lcm % i == 0) {
            lcm /= i;
        }
    }
    
    cout << gcf << endl;
    cout << lcm << endl;
        
	return 0;
}
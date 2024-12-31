#include <iostream>
using namespace std;

int main() {
    int a, b, v, day;
    cin >> a >> b >> v;
    day = (v - a) / (a - b);
    day = (v - a) % (a - b) == 0 ? day += 1 : day += 2;
     
    cout << day;
	return 0;
}
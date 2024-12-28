#include <iostream>
#include <string>
using namespace std;

int main() {
    const long long M = 1234567891;
    long long hash = 0, r = 1;
    
    int l;
    cin >> l;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        hash += (r * ((long) s[i] - 'a' + 1)) % M;
        r = (r * 31) % M;
    }
    
    cout << hash % M;
	return 0;
}
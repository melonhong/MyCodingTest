#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    while (true) {
        bool isPalinedrome = true;
        cin >> s;
        if (s == "0") break;
        
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[s.length() - i - 1]) {
                isPalinedrome = false;
                break;
            }
        }
        
        if (isPalinedrome) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
	return 0;
}
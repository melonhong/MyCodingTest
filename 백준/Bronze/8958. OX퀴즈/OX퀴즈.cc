#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> s;
        int scr = 0, c_num = 0; // corrected number
        
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'O') {
                scr += ++c_num;
                //cout << "scr: " << scr << endl;
            } else {
                c_num = 0;
            }
        }
        
        cout << scr << endl;
    }
    
    return 0;
}
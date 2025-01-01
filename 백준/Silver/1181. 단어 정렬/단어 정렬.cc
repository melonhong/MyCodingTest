#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int comp(string a, string b) { // return smaller one
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main() {
    int n;
    cin >> n;
    string words[20001];
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    sort(words, words + n, comp);
    
    for (int i = 0; i < n; i++) {
        if (i != 0 && words[i] != words[i - 1]) {
            cout << words[i] << endl;
        } else if (i == 0){
            cout << words[i] << endl;
        } else {
            continue;
        }
    }

    return 0;
}
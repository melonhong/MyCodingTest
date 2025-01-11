#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    
    vector<string> name;
    map<string, int> number;
    vector<string> result;
    
    for (int i = 1; i <= n; i++) {
        string pokemon;
        cin >> pokemon;
        name.push_back(pokemon);
        number.insert({ pokemon, i });
    }
    
    string q;
    while (m-- > 0) {
        cin >> q;
        
        if (q[0] >= 65 && q[0] <= 90) {
            result.push_back(to_string(number[q]));
        } else {
            result.push_back(name[stoi(q) - 1]);
        }
    }
    
    for (int i = 0; i <= result.size(); i++) {
        cout << result[i] << '\n';
    }

    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    cin.ignore();
    
    map<string, string> s; // map 사용
    for (int i = 0; i < n; i++) {
        string site, pw;
        cin >> site >> pw;
        s.insert(make_pair(site, pw)); // 사이트와 비밀번호를 입력받고 map에 삽입
    }
    
    for (int i = 0; i < m; i++) {
        string site;
        cin >> site;
        cout << s.find(site)->second << '\n'; // 사이트를 입력받고 map에서 find하여 출력
    }

    return 0;
}
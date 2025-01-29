#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int pattern[10][4] = { // 각 숫자의 거듭제곱 패턴
        {10},
        {1},
        {6, 2, 4, 8}, 
        {1, 3, 9, 7},
        {6, 4},
        {5},
        {6},
        {1, 7, 9, 3},
        {6, 8, 4, 2},
        {1, 9}
    };
    
    while (t-- > 0) {
        int a, b;
        cin >> a >> b;
        
        a %= 10; // a의 일의 자릿수 구하기
        
        switch(a) {
            case 0:
            case 1:
            case 5:
            case 6: // 패턴이 한 가지인 경우(0, 1, 5, 6)
                cout << pattern[a][0] << '\n';
                break;
            case 4:
            case 9: // 패턴이 두 가지인 경우(4, 9)
                b %= 2;
                cout << pattern[a][b] << '\n';
                break;
            default: // 패턴이 네 가지인 경우(2, 3, 7, 8)
                b %= 4;
                cout << pattern[a][b] << '\n';
                break;
        }
    }

    return 0;
}
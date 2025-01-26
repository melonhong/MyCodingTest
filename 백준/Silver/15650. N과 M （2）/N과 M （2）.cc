#include <iostream>
#include <vector>
using namespace std;

vector<int> combination;
int n, m;

void backTracking(int start) {
    // combination의 길이가 m이 되면 출력하고 return
    if (combination.size() == m) {
        for (auto num : combination) {
            cout << num << " ";
        }
        cout << '\n';
        return;
    }
    
    // 1부터 n까지 탐색
    for (int i = start; i <= n; i++) {
        combination.push_back(i); // ex) m = 3이면 1을 push
        backTracking(i + 1); // ex) 2, 3, ... 을 넣는다 -> 만약 combination의 길이가 m이 되면 모두 출력한다
        combination.pop_back(); // 만약 m=3일 때 pop할 때 재귀함수니까 차례대로 pop됨 ex) 1 2 3이 있을 때 3은 2 함수에서 pop 되고, 2는 1에서 pop 되고...
    }
}

int main() {
    cin >> n >> m;
    
    backTracking(1);
    return 0;
}
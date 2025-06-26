#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int n, m;

void backtrack(int depth, int start) {
    // 종료 조건을 만족하면 정답 출력
    if (depth == m) 
    {
        for (int n : v) cout << n << " ";
        cout << endl;
        return;
    }
    
    // 모든 가능한 선택을 저장
    for (int i = start; i <= n; i++)
    {
        v.push_back(i); // 처음 숫자 선택
        backtrack(depth + 1, i); // 다음 자리 채우기
        v.pop_back(); // 선택 취소(이전 상태로 되돌아옴)
    }
}

int main()
{
    cin >> n >> m;
    
    int depth = 0;
    backtrack(0, 1);

    return 0;
}
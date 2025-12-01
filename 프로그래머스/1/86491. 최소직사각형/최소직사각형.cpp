#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    // 탐색을 두 번
    // 첫 번째는 가장 긴 변 찾기 -> 가로
    // 두 번째는 두 번째로 긴 변 찾기 -> 세로
    // 첫 번째 탐색에서 뒤집기
    
    int tw = 0, th = 0;
    for (auto& vec : sizes) {
        if (vec[0] < vec[1]) {
            int temp = vec[1];
            vec[1] = vec[0];
            vec[0] = temp;
        }
        
        if (tw < vec[0]) tw = vec[0];
        if (th < vec[1]) th = vec[1];
        
    }
    
    answer = th * tw;
    return answer;
}
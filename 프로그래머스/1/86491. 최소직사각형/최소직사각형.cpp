#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int tw = 0, th = 0;
    for (auto& vec : sizes) {
        if (vec[0] < vec[1]) {
            int tmp = vec[0];
            vec[0] = vec[1];
            vec[1] = tmp;
        }
        if (tw < vec[0]) tw = vec[0];
        if (th < vec[1]) th = vec[1];
        
    }
    answer = tw * th;
    return answer;
}
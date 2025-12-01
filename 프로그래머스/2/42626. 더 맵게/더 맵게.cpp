#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> q;
    
    for (auto i : scoville) {
        q.push(i);
    }
    
    if (q.top() >= K) {
        return answer;
    } else {
        while (q.top() < K) {
            if (q.size() < 2) {
                return -1;
            }
            int v1 = q.top();
            q.pop();
            int v2 = q.top();
            q.pop();

            int next = v1 + v2 * 2;
            
            
            
            q.push(next);
            
            answer++;
        }
    }
    
    return answer;
}
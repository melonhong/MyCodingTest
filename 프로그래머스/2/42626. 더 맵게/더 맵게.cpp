#include <string>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (auto i : scoville) {
        pq.push(i);
    }
    
    while(pq.top() < K) {
        if (pq.size() < 2) return -1;
        int v1 = pq.top();
        pq.pop();
        int v2 = pq.top();
        pq.pop();
        pq.push(v1 + v2 * 2);
        answer++;
    }
    return answer;
}
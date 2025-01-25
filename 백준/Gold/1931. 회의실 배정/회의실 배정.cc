#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) { // 회의 시간이 짧은 순서대로 정렬
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    vector<pair<int, int>> v; // 회의 시작 시간과 종료 시간을 저장
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    
    sort(v.begin(), v.end(), comp); // 정렬하기
    
    int cnt = 1, last_end = v[0].second; // 정답과 마지막으로 종료된 회의 시간
    
    for (int i = 1; i < N; i++) {
        if (v[i].first >= last_end) { // 다음 회의 시작 시간이 마지막으로 종료된 회의 시간보다 늦게 시작하면 회의에 넣기
            cnt++;
            last_end = v[i].second;
        }
    }
    
    cout << cnt;

    return 0;
}
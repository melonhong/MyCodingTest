#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> arr, v;
set<vector<int>> ans; // 수열을 저장하는 set (중복 제거)

void backtrack(int depth, int si) 
{
    if (depth == m)
    {
        ans.insert(v); // 수열을 저장
        return;
    }
    
    for (int i = si; i < n; i++)
    {
        v.push_back(arr[i]);
        backtrack(depth + 1, i);
        v.pop_back();  
    }
}

int main()
{
    cin >> n >> m;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    backtrack(0, 0);
    
    for (auto seq : ans) { // 저장된 수열을 출력
        for (int num : seq)
            cout << num << " ";
        cout << "\n";
    }

    return 0;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++) {
        vector<int> cmd = commands[i];
        vector<int> temp;
        for (int j = cmd[0] - 1; j <= cmd[1] - 1; j++) {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        //for (auto i : temp) cout << i << " ";
        answer.push_back(temp[cmd[2] - 1]);
        //cout << endl;
    }
    
    return answer;
}
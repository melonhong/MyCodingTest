#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> m;
    
    for (auto name : completion) {
        m[name]++;
    }
    
    for (auto name : participant) {
        m[name]--;
    }
    
    for (auto it : m) {
        if (it.second != 0) answer = it.first;
    }
    
    return answer;
}
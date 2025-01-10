#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    const int NUM = 4000;
    int n;
    cin >> n;
    vector<int> v;
    int cnt[2 * NUM + 1] = { 0 }; // idx 0 = -4000, idx 4000 = 0, idx 8000 = 4000, 빈도 수를 저장하는 배열
    int max = 0;
    double sum = 0;
    
    while (n--) {
        int k;
        cin >> k;
        v.push_back(k);
        sum += k;
        cnt[k + NUM]++;
        if (cnt[k + NUM] > max) max = cnt[k + NUM]; // 최빈값 횟수 저장
    }
    
    bool isSecond = false;
    int result = -1;
    
    for (int i = 0; i < 2 * NUM + 1; i++) {
        if (cnt[i] == max) { // 최빈값과 같은 횟수의 수가 나타나면
            if (isSecond) { // 두 번째로 작은 값의 경우 break
                result = i;
                break;
            }
            result = i; // result에 저장장
            isSecond = true;
        }
    }
    
    sort(v.begin(), v.end());
    
    printf("%d\n%d\n%d\n%d", static_cast<int>(round(sum / v.size())), v[v.size() / 2], result - NUM, v.back() - v.front());

    return 0;
}
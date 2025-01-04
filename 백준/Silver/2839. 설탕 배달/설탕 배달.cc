#include <iostream>
#include <utility>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    pair<int, int> num[1000]; // first = 5a, second 3b
    cin >> n;
    
    int a = n / 5 + 1, b = 0, i = 0;
    while (--a >= 0) {
        int nn = n - 5 * a;
        if (nn == 0) {
            num[i].first = a;
            num[i].second = b;
            i++;
        } else {
            b = nn / 3;
            nn -= 3 * b;
            if (nn == 0) {
                num[i].first = a;
                num[i].second = b;
                i++;
            } else {
                num[i].first = n;
                num[i].second = 0;
                i++;
            }
        }
    }
    
    /*
    for (int j = 0; j < i; j++) {
        printf("%d + %d = %d\n", num[j].first, num[j].second, num[j].first + num[j].second);
    }*/
    
    int sum = num[0].first + num[0].second;
    for (int j = 1; j < i; j++) {
        if (num[j].first == -1) {
            continue;
        } else {
            sum = (num[j].first + num[j].second) < sum ? num[j].first + num[j].second : sum;
        }
    }
    
    if (sum == n) {
        cout << -1;
    } else {
        cout << sum;
    }
    
    return 0;
}
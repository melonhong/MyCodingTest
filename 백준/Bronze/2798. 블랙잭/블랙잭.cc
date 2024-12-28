#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, result = 0;
    cin >> n >> m;
    
    int* cards = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    
    sort(cards, cards + n);
    
    while (true) {
        for (int i = n - 1; i > 1; i--) {
            int sum = cards[i];
            //printf("i %d: %d\n", i, sum);
            for (int j = i - 1; j > 0; j--) {
                sum += cards[j];
                //printf("    j %d: %d + %d = %d\n", j, cards[i], cards[j], sum);
                for (int k = j - 1; k >= 0; k--) {
                    sum += cards[k];
                    //printf("        k %d: %d + %d + %d = %d\n", k, cards[i], cards[j], cards[k], sum);
                    if (sum <= m && result <= sum) {
                        result = sum;
                        //printf("        !!! %d + %d + %d = %d\n", cards[i], cards[j], cards[k], sum);
                    }
                    sum -= cards[k];
                }
                sum -= cards[j];
            }
            sum -= cards[i];
            if (i == 1) break;
        }
        break;
    }
    
    cout << result;
    
    return 0;
}
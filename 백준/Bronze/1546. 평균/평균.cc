#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    float* score = new float[n];
    float m = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (m < score[i]) m = score[i];
    }
    
    for (int i = 0; i < n; i++) {
        score[i] = score[i] / m * 100;
        sum += score[i];
    }
    cout << sum / n << endl;
        
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    string s = to_string(a * b * c);
    int arr[10] = {};
    
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
            case '0': arr[0]++; break;
            case '1': arr[1]++; break;
            case '2': arr[2]++; break;
            case '3': arr[3]++; break;
            case '4': arr[4]++; break;
            case '5': arr[5]++; break;
            case '6': arr[6]++; break;
            case '7': arr[7]++; break;
            case '8': arr[8]++; break;
            case '9': arr[9]++; break;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
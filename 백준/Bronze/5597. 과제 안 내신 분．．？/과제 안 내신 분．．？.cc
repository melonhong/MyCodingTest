#include <iostream>
using namespace std;

#define SIZE 30
#define LAZY 2

int main() {
    int s[SIZE], r[LAZY];
    
    // initialize s
    for (int i = 0; i < SIZE; i++) s[i] = i + 1;
    
    // get input and set 0 of input index
    for (int i = 0; i < SIZE - LAZY; i++) {
        int a;
        cin >> a;
        
        s[a - 1] = 0;
    }
    
    // find who didn't homework and write in r
    int ri = 0;
    for (int i = 0; i < SIZE; i++) {
        if (s[i] != 0) {
            r[ri] = s[i];
            ri++;
        }
    }
    
    // print result
    if (r[0] < r[1]) {
        printf("%d\n%d", r[0], r[1]);
    } else {
        printf("%d\n%d", r[1], r[0]);
    }
    
    return 0;
}
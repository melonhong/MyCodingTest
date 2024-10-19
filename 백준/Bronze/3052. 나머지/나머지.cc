#include <iostream>
using namespace std;

#define SIZE 10

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b =t;
}

int main() {
    int a[SIZE];
    
    // initialize array
    for (int i = 0; i < SIZE; i++) {
        int c;
        cin >> c;
        a[i] = c % 42;
    }
    
    // bubble sort array
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    
    // count how many different numbers in array 
    int cnt = 1;
    for (int i = 0; i < SIZE - 1; i++) {
        if (a[i] != a[i + 1]) cnt++;
    }
    
    // print cnt
    cout << cnt << endl;
    
    return 0;
}
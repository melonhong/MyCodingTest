#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int* arr = new int[t * 2];
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &arr[2 * i], &arr[2 * i + 1]);
    }
    
    for (int i = 0; i < t; i++) {
        printf("%d\n", arr[2 * i] + arr[2 * i + 1]);
    }
    
    delete [] arr;
    arr = NULL;
    
    return 0;
}
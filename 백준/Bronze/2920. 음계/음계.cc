#include <iostream>
using namespace std;

int main() {
    const int ARR_SIZE = 8;
    int arr[ARR_SIZE];
    char f;   // 'a' == ascending, 'd' == descending, 'm' == mixed
    
    for (int i = 0; i < ARR_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (arr[0] == 1) {  // 상향 음계인지 확인
        for (int i = 1; i < ARR_SIZE; i++) {
            if (arr[i] == i + 1) {
                f = 'a';
            } else {
                f = 'm';
                break;
            }
        }
    } else if (arr[0] == 8) {   // 하향 음계인지 확인
        for (int i = 1; i < ARR_SIZE; i++) {
            if (arr[i] == 8 - i) {
                f = 'd';
            } else {
                f = 'm';
                break;
            }
        }
    }
    
    
    if (f == 'a') {
        printf("ascending");
    } else if (f == 'd'){
        printf("descending");
    } else {
        printf("mixed");
    }
    
    return 0;
}

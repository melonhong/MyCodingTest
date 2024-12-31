#include <iostream>
#include <string>
using namespace std;

void printNum(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        cout << "FizzBuzz";
    } else if (n % 3 == 0 && n % 5 != 0) {
        cout << "Fizz";
    } else if (n % 3 != 0 && n % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << n;
    }
    return;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    if (s1 != "Fizz" && s1 != "Buzz" && s1 != "FizzBuzz") {
        printNum(stoi(s1) + 3);
    } else if (s2 != "Fizz" && s2 != "Buzz" && s2 != "FizzBuzz") {
        printNum(stoi(s2) + 2);
    } else if (s3 != "Fizz" && s3 != "Buzz" && s3 != "FizzBuzz") {
        printNum(stoi(s3) + 1);
    }

    return 0;
}
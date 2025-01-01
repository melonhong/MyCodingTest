#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int result = 665;
	cin >> n;

	for (int i = 0; i < n; i++) {
		while (true) {
			result++;
			if (to_string(result).find("666") != -1)
				break;
		}
	}
	cout << result << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int nn = n;
	int kk = k;
	
	if (k == 0) {
	    cout << 1;
	} else {
	    for (int i = n - 1; i > n - k; i--) {
	        nn *= i;
    	}
    	
    	for (int i = k - 1; i > 1; i--) {
    	    kk *= i;
    	}
	
    	cout << nn / kk;
	}
	return 0;
}
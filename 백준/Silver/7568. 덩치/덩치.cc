#include <iostream>
#include <utility>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int rank = 1;
	pair<int,int> arr[50];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) { // i번째 사람보다 큰 덩치의 사람 수를 rank에 저장
		    if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		}
	    cout << rank << ' ';
		rank = 1;
	}
}
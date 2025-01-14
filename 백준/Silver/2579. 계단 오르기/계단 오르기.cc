#include <iostream>
using namespace std;

int n;
int dp[301]; // n번째까지의 점수의 최댓값
int arr[301] = {0, }; // 계단의 점수

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
	
	// 1, 2, 3번째 계단까지의 최댓값을 계산
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1], arr[2]) + arr[3];
    
    for(int i = 4; i <= n; i++)
        dp[i] = max(dp[i-3] + arr[i-1], dp[i-2]) + arr[i]; 
        // i번째 계단에서 최댓값이 되려면 i - 1번째에서 한 칸 뛰거나
        // i - 2번째 계단에서 두 칸 뛰어서 i번째 계단에 도달해야 됨
        // 이 두 경로를 비교하여 더 큰 점수를 택하기
    
    cout << dp[n] << '\n';
}
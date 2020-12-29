////문제: 연속합
////알고리즘: DP
////푼날짜: 2020-12-29

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int dp[100001];
//int arr[100001];
//int main() {
//	int n;
//	int ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> arr[i];
//
//
//	dp[1] = arr[1];
//	ans = arr[1];
//	for (int i = 2; i <= n; i++) {	
//		//i번째까지 연속합중 최대값을 dp[i]에 저장
//		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
//		ans = max(ans, dp[i]);
//	}
//	cout << ans;
//
//
//
//}
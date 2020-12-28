////문제: 1로만들기(실버3)
////알고리즘: DP
////푼날짜: 2020-12-28
////참고: https://blockdmask.tistory.com/254
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n;
//int dp[1000001]; //index(숫자)까지 도달할때 최소 경우의 수
////bottom up방식(반복문)으로 작은문제서 큰문제를 풀어나간다
//int solve() {
//	dp[1] = 0;// 1일때는 횟수 0
//	for (int i = 2; i <= n; i++) {
//		dp[i] = dp[i - 1] + 1; //1을 뺌
//		if (i % 2 == 0) {
//			dp[i] = min(dp[i], dp[i / 2]+1);
//		}
//		if (i % 3 == 0) {
//			dp[i] = min(dp[i], dp[i / 3]+1);
//		}
//	}
//	return dp[n];
//}
//
//int main() {
//	cin >> n;
//	int ret= solve();
//	
//	cout << ret;
//}

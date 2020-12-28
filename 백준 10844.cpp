////문제: 쉬운 계단 수(실버 1)
////알고리즘: DP
////설계참고: https://sihyungyou.github.io/baekjoon-10844/
////참고: https://js1jj2sk3.tistory.com/38
////바텀업방식사용( 이중 for문 )
//#include<iostream>
//#define MOD 1000000000
//using namespace std;
//int n;
//int dp[101][10]; //길이가 N일때, 끝나는 자릿수의 경우의수
//
//void solve() {
//	
//	for (int i = 1; i < 10; i++) {
//		dp[1][i] = 1;
//	}
//
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (j == 0) dp[i][0]=dp[i - 1][1] % MOD;
//			else if (j == 9) dp[i][9]=dp[i - 1][8] % MOD;
//			else dp[i][j] = (dp[i - 1][j-1] + dp[i - 1][j+1]) % MOD;
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < 10; i++) {
//		ans = (ans+dp[n][i]) % MOD;
//	}
//	cout << ans;
//}
//
//int main() {
//	cin >> n;
//	solve();
//}

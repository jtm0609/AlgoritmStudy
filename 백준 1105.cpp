////문제: 오르막수 (실버1)
////알고리즘: dp
////푼날짜: 2020-12-29
////참고: https://jaemin8852.tistory.com/167
//
//#include<iostream>
//#define MOD 10007
//using namespace std;
//
//int n;
//int dp[1001][10]; //길이가 i이고 j로 시작하는 경우의수
//
//int main() {
//	cin >> n;
//	for (int i = 0; i <= 9; i++)
//		dp[1][i] = 1;
//
//	//길이
//	for (int i = 2; i <= n; i++) {
//		//시작하는 숫자
//		for (int j = 0; j < 10; j++) {
//			for(int k=j; k<10; k++)
//			dp[i][j] = (dp[i][j]+dp[i-1][k]) % MOD;
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < 10; i++) {
//		ans = (ans+dp[n][i]) % MOD ;
//	}
//	cout << ans;
//}

////����: ���� ��� ��(�ǹ� 1)
////�˰���: DP
////��������: https://sihyungyou.github.io/baekjoon-10844/
////����: https://js1jj2sk3.tistory.com/38
////���Ҿ���Ļ��( ���� for�� )
//#include<iostream>
//#define MOD 1000000000
//using namespace std;
//int n;
//int dp[101][10]; //���̰� N�϶�, ������ �ڸ����� ����Ǽ�
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

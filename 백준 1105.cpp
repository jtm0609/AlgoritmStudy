////����: �������� (�ǹ�1)
////�˰���: dp
////Ǭ��¥: 2020-12-29
////����: https://jaemin8852.tistory.com/167
//
//#include<iostream>
//#define MOD 10007
//using namespace std;
//
//int n;
//int dp[1001][10]; //���̰� i�̰� j�� �����ϴ� ����Ǽ�
//
//int main() {
//	cin >> n;
//	for (int i = 0; i <= 9; i++)
//		dp[1][i] = 1;
//
//	//����
//	for (int i = 2; i <= n; i++) {
//		//�����ϴ� ����
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

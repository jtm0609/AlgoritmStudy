////����: 1�θ����(�ǹ�3)
////�˰���: DP
////Ǭ��¥: 2020-12-28
////����: https://blockdmask.tistory.com/254
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n;
//int dp[1000001]; //index(����)���� �����Ҷ� �ּ� ����� ��
////bottom up���(�ݺ���)���� ���������� ū������ Ǯ�����
//int solve() {
//	dp[1] = 0;// 1�϶��� Ƚ�� 0
//	for (int i = 2; i <= n; i++) {
//		dp[i] = dp[i - 1] + 1; //1�� ��
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

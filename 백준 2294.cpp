////����: ����2 (�ǹ�1)
////�˰��� : dp
////Ǭ��¥: 2020-12-29
////����1�� ���빮��
////����: https://songsunbi.tistory.com/70
//#include<iostream>
//#include<algorithm>
//#define max 1000001
//using namespace std;
//
//int n, k;
//int dp[max];
//int coin[max];
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> coin[i];
//	}
//
//	for (int i = 0; i <= k; i++)
//		dp[i] = 1000001;
//
//	dp[0] = 0;
//	
//	//coin[i] => i�ε��� �϶� �����ǰ�ġ
//	for (int i = 0; i < n; i++) {
//		//j��ġ�� ������ ����µ� ������ �ּҰ��� ���ϱ�
//		for (int j = coin[i]; j <= k; j++) {
//			dp[j] = min(dp[j], dp[j - coin[i]]+1);
//		}
//	}
//
//	//k��ġ�� ������ ������°��
//	if (dp[k] == 1000001) {
//		cout << -1;
//		return 0;
//	}
//	cout << dp[k];
//}

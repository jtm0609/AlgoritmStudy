////����: ���� �� �����ϴ� �κ� ���� (�ǹ�2)
////�ð����⵵: O(N^2)
////�˰��� : DP
////Ǭ��¥: 2020-12-29
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int n;
//int arr[40001];
//int dp[40001];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	//i��°�ε����϶� ������� ����Ǽ�
//	for (int i = 0; i < n; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//
//	int ans = 0;
//	//����ū ������� ã��
//	for (int i = 0; i < n; i++) {
//		ans = max(ans, dp[i]);
//	}
//	cout << ans;
//
//
//	return 0;
//}
////����: ���ڳֱ�
////�˰���: LIS + DP
////�ð����⵵: O(N^2)
////����: https://sihyungyou.github.io/baekjoon-1965/
////Ǭ��¥: 2020-12-23
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//int arr[1001];
////�� ��ġ�� ���ڱ��� �ִ� ��� ���ڸ� �������ִ��� ����
//int dp[1001]; 
//
//int main() {
//	int ans=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	dp[0] = 1;
//	//�ι�° ���ں��� ����
//	for (int i = 1; i < n; i++) {
//		//ó������ i��° ���ڱ���
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				dp[i] = max(dp[i], dp[j]); 
//			}	
//		}
//		//������� 1��ŭ �߰�
//		dp[i]++;
//		//�ִ� ��
//		ans = max(ans, dp[i]);
//	}
//	cout << ans;
//	
//	
//	return 0;
//}
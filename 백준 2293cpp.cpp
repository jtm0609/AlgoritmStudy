////����: ����
////�˰���:DP
////��������� �����ϴ� �κ��� �������
////����������: https://www.youtube.com/watch?v=2IkdAk1Loek
////��α�����: https://debuglog.tistory.com/78
////Ǭ��¥: 2020-12-22
//
//#include<iostream>
//using namespace std;
//
//int n, k;
//int coin[100001];
//int dp[100001];//i���� �������� ������ִ� ����Ǽ�
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		cin >> coin[i];
//	}
//
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) { //i���� �����϶�,
//		for (int j = 1; j <= k; j++) { //i���� �������� j���� ��ġ�� ������ִ� ����Ǽ� ���ϱ�
//			if (j >= coin[i]) { 
//				dp[j] += dp[j - coin[i]];
//			}
//
//		}
//	}
//	cout << dp[k];
//	
//}

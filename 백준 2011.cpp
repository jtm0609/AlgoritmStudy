////����: ��ȣ�ڵ� (�ǹ� 1)
////�˰���: DP
////����: https://yabmoons.tistory.com/163,  https://jaimemin.tistory.com/459
////��¥: 2020/12/18
//		
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int MAX = 5000 + 1;
//const int MOD = 1000000;
//int len;
//int arr[MAX];
//int dp[MAX];
//
//int password(void)
//{
//	dp[0] = 1;
//	for (int i = 1; i <= len; i++) {
//		//A~l�� �����Ͽ������
//		if (arr[i] >= 1 && arr[i] <= 9) {
//			dp[i] = (dp[i - 1]) % MOD; //i��° ���ڱ��� �������ִ� �ܾ��� ����= i-1��° ���ڴܾ��
//		}
//		if (i == 1) continue;
//
//		//J~Z�� �����Ͽ������
//		int temp = arr[i] + arr[i - 1] * 10;
//		if (10 <= temp && temp <= 26)
//			dp[i] = (dp[i - 2] + dp[i]) % MOD; //i��° ���ڱ��� �������ִ� �ܾ��� ���� =i-2��° ���ڴܾ�� + i����ܾ��ǰ���
//
//	}
//	return dp[len];
//
//}
//
//int main() {
//	string s;
//	cin >> s;
//	len = s.length();
//	for (int i = 1; i <= len; i++) {
//		arr[i] = s[i - 1] - '0';
//	}
//
//	cout << password() << endl;
//
//}
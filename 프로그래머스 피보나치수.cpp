////����: �Ǻ���ġ�� LV2
////�˰���: dp
//
//#include <string>
//#include <vector>
//
//using namespace std;
//int dp[100001];
//int fibo(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	//�̹� ������ؼ� ���� �������ִٸ� �װ�����
//	if (dp[n] != 0)
//		return dp[n];
//
//	//���� �����������ʴٸ� 
//	else {
//		dp[n] = (fibo(n - 2) + fibo(n - 1)) % 1234567;
//		return dp[n];
//	}
//}
//int solution(int n) {
//	int answer = fibo(n);
//	return answer;
//}
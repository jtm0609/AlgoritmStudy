////문제: 피보나치수 LV2
////알고리즘: dp
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
//	//이미 계산을해서 값을 가지고있다면 그값리턴
//	if (dp[n] != 0)
//		return dp[n];
//
//	//값을 가지고있지않다면 
//	else {
//		dp[n] = (fibo(n - 2) + fibo(n - 1)) % 1234567;
//		return dp[n];
//	}
//}
//int solution(int n) {
//	int answer = fibo(n);
//	return answer;
//}
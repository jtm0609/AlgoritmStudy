////문제: 피보나치수
////알고리즘: dp
//
//#include<iostream>
//using namespace std;
//
//int dp[46];
//int fibo(int num) {
//	if (num <= 1) return num;
//	if (dp[num]) return dp[num];
//	dp[num]= fibo(num - 2) + fibo(num - 1);
//	return dp[num];
//
//}
//int main() {
//	int n;
//	cin >> n;
//	cout<<fibo(n);
//
//
//}
//#include<iostream>
//using namespace std;
//
//int fibo(int num);
//
//int dp[100];
//
//int main() {
//	int num;
//	cin >> num;
//	
//	cout << fibo(num)<<"\n";
//
//	return 0;
//
//}
//
//int fibo(int num) {
//	if (num == 1 || num==2)
//		return 1;
//
//	if (dp[num] != 0) return dp[num];
//
//	else {
//		return dp[num]=(fibo(num - 1) + fibo(num - 2));
//	}
//
//
//}
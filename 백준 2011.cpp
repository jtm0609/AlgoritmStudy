////문제: 암호코드 (실버 1)
////알고리즘: DP
////참고: https://yabmoons.tistory.com/163,  https://jaimemin.tistory.com/459
////날짜: 2020/12/18
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
//		//A~l로 인지하였을경우
//		if (arr[i] >= 1 && arr[i] <= 9) {
//			dp[i] = (dp[i - 1]) % MOD; //i번째 숫자까지 읽을수있는 단어의 개수= i-1번째 숫자단어개수
//		}
//		if (i == 1) continue;
//
//		//J~Z로 인지하였을경우
//		int temp = arr[i] + arr[i - 1] * 10;
//		if (10 <= temp && temp <= 26)
//			dp[i] = (dp[i - 2] + dp[i]) % MOD; //i번째 숫자까지 읽을수있는 단어의 개수 =i-2번째 숫자단어개수 + i번재단어의개수
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
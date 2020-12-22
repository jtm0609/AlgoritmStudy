////문제: 동전
////알고리즘:DP
////설계상으로 이해하는 부분이 어려웠음
////동영상참조: https://www.youtube.com/watch?v=2IkdAk1Loek
////블로그참조: https://debuglog.tistory.com/78
////푼날짜: 2020-12-22
//
//#include<iostream>
//using namespace std;
//
//int n, k;
//int coin[100001];
//int dp[100001];//i개의 동전으로 만들수있는 경우의수
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		cin >> coin[i];
//	}
//
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) { //i개의 동전일때,
//		for (int j = 1; j <= k; j++) { //i개의 동전으로 j동전 가치를 만들수있는 경우의수 구하기
//			if (j >= coin[i]) { 
//				dp[j] += dp[j - coin[i]];
//			}
//
//		}
//	}
//	cout << dp[k];
//	
//}

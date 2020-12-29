////문제: 동전2 (실버1)
////알고리즘 : dp
////푼날짜: 2020-12-29
////동전1의 응용문제
////참고: https://songsunbi.tistory.com/70
//#include<iostream>
//#include<algorithm>
//#define max 1000001
//using namespace std;
//
//int n, k;
//int dp[max];
//int coin[max];
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> coin[i];
//	}
//
//	for (int i = 0; i <= k; i++)
//		dp[i] = 1000001;
//
//	dp[0] = 0;
//	
//	//coin[i] => i인덱스 일때 동전의가치
//	for (int i = 0; i < n; i++) {
//		//j가치의 동전을 만드는데 동전의 최소개수 구하기
//		for (int j = coin[i]; j <= k; j++) {
//			dp[j] = min(dp[j], dp[j - coin[i]]+1);
//		}
//	}
//
//	//k가치의 동전을 못만드는경우
//	if (dp[k] == 1000001) {
//		cout << -1;
//		return 0;
//	}
//	cout << dp[k];
//}

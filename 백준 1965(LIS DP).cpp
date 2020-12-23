////문제: 상자넣기
////알고리즘: LIS + DP
////시간복잡도: O(N^2)
////참고: https://sihyungyou.github.io/baekjoon-1965/
////푼날짜: 2020-12-23
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//int arr[1001];
////각 위치의 상자까지 최대 몇개의 상자를 넣을수있는지 저장
//int dp[1001]; 
//
//int main() {
//	int ans=0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	dp[0] = 1;
//	//두번째 상자부터 시작
//	for (int i = 1; i < n; i++) {
//		//처음부터 i번째 상자까지
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				dp[i] = max(dp[i], dp[j]); 
//			}	
//		}
//		//현재상자 1만큼 추가
//		dp[i]++;
//		//최댓값 비교
//		ans = max(ans, dp[i]);
//	}
//	cout << ans;
//	
//	
//	return 0;
//}
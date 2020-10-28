////문제: 퇴사
////알고리즘: 블루트포스+dfs
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//int N;
//vector<pair<int,int>> dp;
//int ans;
//int temp_p;
//
//void solve(int date, int t, int p) {
//	int next_date = date + t;
//
//	//다음 date가 N보다크면 탈출 
//	if (next_date > N)
//		return;
//
//	//최대값비교
//	ans = max(ans, p);
//
//	//재귀로 모든경우의수 탐색
//	for (int i = next_date; i < N; i++) {
//		int next_t = dp[i].first;
//		int next_p = dp[i].second;
//	
//		solve(i, next_t, p+next_p);
//	}
//}
//int main() {
//	//입력
//	cin >> N;
//	//1일부터 N일까지입력
//	for (int i = 0; i < N; i++) {
//		int t,p; //기간, 금액
//		cin >> t >> p;
//		dp.push_back(pair<int, int>(t, p));
//	}
//	
//	//재귀로 모든경우의수 탐색
//	for (int i = 0; i < N; i++) {
//		solve(i,dp[i].first, dp[i].second);
//	
//	}
//
//	cout << ans;
//
//
//
//}
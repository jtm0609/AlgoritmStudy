////문제: 욕심쟁이 판다
////알고리즘: dfs + dp
////https://lmcoa15.tistory.com/58 참고하여 풀었음
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int n;
//int ans;
//int map[500][500];
//int dp[500][500];
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //북, 동, 남, 서
//int cnt;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//int dfs(int x, int y) {
//
//	//df에 값이 있다면 그값 리턴
//	if (dp[x][y])
//		return dp[x][y];
//	//없다면 1
//	dp[x][y] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + d[i][0];
//		int ny = y + d[i][1];
//		if (!isInside(nx,ny))
//			continue;
//
//		if (map[x][y] >= map[nx][ny])
//			continue;
//		
//		//dp[x][y]는 (x,y)좌표에서 가장 멀리 갈수 있는 길임
//		//dfs를통해 갈수있다면 1을 더해주는식으로 탐색한다.
//		//for문을 돌기때문에 max를 통해 최댓값을 비교해야함
//		dp[x][y]=max(dp[x][y], dfs(nx, ny) + 1);
//		
//		
//	}
//	return dp[x][y];
//	
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			
//			ans = max(ans, dfs(i, j));
//		}
//	}
//
//	cout << ans;
//
//
//
//}
////문제: 내리막길
////알고리즘: dfs + dp
////dp값을 -1로 초기화안하고, 27번라인에 dp[x][y]=0으로 초기화부분을 구현해주지않아서 오탑처리됬었음
//#include<iostream>
//using namespace std;
//
//int map[500][500];
//int n, m;
//int d[4][2] = { {-1,0}, {0,1},{1,0},{0,-1} };//북동남서
//int dp[500][500];
//int cnt = 0;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//int dfs(int x, int y) {
//	//목표지점에 도착하면 1 카운트
//	if (x == n - 1 && y == m - 1)
//		return 1;
//	
//	
//	//dp에 값이 있다면 저장된값 리턴
//	if (dp[x][y]!=-1)
//		return dp[x][y];
//
//	//dp에 값이없다면 0으로 초기화
//	dp[x][y] = 0;
//	//탐색
//	for (int i = 0; i < 4; i++) {
//		int nx = x + d[i][0];
//		int ny = y + d[i][1];
//		if (!isInside(nx, ny)) continue;
//
//		//내리막길이라면 
//		if (map[x][y] > map[nx][ny]) {
//			dp[x][y]+=dfs(nx, ny);
//			
//		}
//
//	}
//	
//	//for문을 이용해 4방향 다탐색후 리턴하지못했다면, 현재 x,y좌표 저장된값 리턴
//	return dp[x][y];
//
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			//dp를 -1로 초기화
//			dp[i][j] = -1;
//		}
//	}
//
//	cout<<dfs(0,0);
//	
//
//}
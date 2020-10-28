////문제: 안전영역
////알고리즘: dfs
////거의 다풀었는데 사소한 실수때문에, https://rebas.kr/773 참고함
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int map[101][101];
//int temp[101][101];
//bool visit[101][101];
//int n;
//int ans=-12345678;
//int d[4][2] = { {-1,0}, {0,1}, {1,0 },{0,-1} }; //북동남서
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//void dfs(int x, int y, int h) {
//		visit[x][y] = true;
//
//	for (int z = 0; z < 4; z++) {
//		int nx = x + d[z][0];
//		int ny = y + d[z][1];
//		if (!isInside(nx, ny)) continue;
//		if (visit[nx][ny] || map[nx][ny] <=h) continue;
//		dfs(nx, ny, h);
//		
//	}
//
//}
//int main() {
//	cin >> n;
//	int maxValue= -12345678;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			maxValue=max(maxValue, map[i][j]);
//		}
//	}
//
//	//비가 높이만큼내렸다면
//	for (int h = 0; h <=maxValue; h++) {
//		memcpy(temp, map, sizeof(map));
//		int cnt = 0;
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (map[i][j] >h && !visit[i][j]) {
//					dfs(i, j,h);
//					cnt++;
//				}
//			}
//		}
//
//		//백트래킹을 위해 방문여부 초기화
//		memset(visit, false, sizeof(visit));
//
//		//최댓값 비교
//		ans = max(cnt, ans);
//
//	}
//
//	cout << ans;
//
//}
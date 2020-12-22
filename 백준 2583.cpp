////문제 영역구하기 (실버 1)
////알고리즘: dfs
////푼날짜: 2020-12-22

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int m, n, k;
//int map[101][101];
//bool visited[101][101];
//vector<int> area;
//int d[4][2] = {
//	{1,0}, {-1,0}, {0,1},{0,-1}
//};
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < m) && (b >= 0 && b < n);
//}
//int dfs(int y, int x, int cnt) {
//
//	visited[y][x] = true;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + d[i][0];
//		int nx = x + d[i][1];
//		if (!isInside(ny, nx)) continue;
//		if (!visited[ny][nx] && map[ny][nx] == 0) {
//			cnt = dfs(ny, nx, ++cnt);
//		}
//
//	}
//	return cnt;
//}
//
//int main() {
//	cin >> m >> n >> k;
//	for (int i = 0; i < k; i++) {
//		int leftBottom_x, leftBottom_y;
//		int rightTop_x, rightTop_y;
//		cin >> leftBottom_x >> leftBottom_y >> rightTop_x >> rightTop_y;
//		for (int y = leftBottom_y; y < rightTop_y; y++) {
//			for (int x = leftBottom_x; x < rightTop_x; x++) {
//				map[y][x] = 1; //직사각형이 있는곳 1로표시
//			}
//		}
//	}
//
//
//	//탐색
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (!visited[i][j] && map[i][j] == 0) {
//				int cnt = dfs(i, j, 1);
//				area.push_back(cnt);
//			}
//
//		}
//	}
//
//	cout << area.size() << endl;
//	sort(area.begin(), area.end());
//	for (int i = 0; i < area.size(); i++) {
//		cout << area[i] << ' ';
//	}
//
//
//}
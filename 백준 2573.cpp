////문제 : 빙산
////알고리즘 :bfs+ dfs
////문제풀다가 디버그하는데 시간이 너무오래걸려서 https://rebas.kr/676 참조해서 흐름만 파악하고 복붙함 , 내코드랑 로직은 비슷했음
//
//#include <cstdio>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//struct ice {
//	int x, y;
//};
//
//int n, m;
//int a[301][301];
//bool check[301][301];
//const int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };
//queue<ice> q;
//
//void dfs(int x, int y) {
//	check[x][y] = true;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i], ny = y + dy[i];
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//		if (check[nx][ny] || a[nx][ny] < 0) continue;
//		dfs(nx, ny);
//	}
//}
//
//bool counting() {
//	int cnt = 0;
//	memset(check, false, sizeof(check));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (!check[i][j] && a[i][j] > 0) {
//				dfs(i, j);
//				cnt++;
//				if (cnt >= 2) return true;
//			}
//		}
//	}
//	return false;
//}
//
//void melting() {
//	queue<ice> p;
//	int len = q.size();
//	for (int i = 0; i < len; i++) {
//		int x = q.front().x, y = q.front().y;
//		q.pop();
//		for (int k = 0; k < 4; k++) {
//			int nx = x + dx[k], ny = y + dy[k];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//			if (a[x][y] > 0 && a[nx][ny] == -1) a[x][y] -= 1;
//		}
//		if (a[x][y] > 0) q.push({ x, y });
//		else if (a[x][y] == 0) p.push({ x, y });
//	}
//	while (!p.empty()) {
//		int x = p.front().x, y = p.front().y;
//		p.pop();
//		a[x][y] = -1;
//	}
//}
//
//int solve() {
//	int year = 0;
//	while (!q.empty()) {
//		melting();
//		year++;
//		if (counting()) return year;
//	}
//	return 0;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j]) q.push({ i, j });
//			else a[i][j] = -1;
//		}
//	}
//	printf("%d\n", solve());
//	return 0;
//}
//
//

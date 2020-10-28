////문제: DFS와 BFS
////알고리즘 :DFS, BFS
////https://velog.io/@seovalue/%EB%B0%B1%EC%A4%80-1260%EB%B2%88-C-DFS%EC%99%80-BFS
//
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<cstring>
//using namespace std;
//
//int n;
//int m;
//int s;
//int map[1001][1001];
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
//bool visit[1001];
//queue<int> q;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//void dfs(int idx) {
//	cout << idx << " ";
//	visit[s] = true;
//	for (int j = 1; j <= n; j++) {
//		if (map[idx][j] == 1 && !visit[j]) {
//			visit[j] = true;
//			dfs(j);
//			
//		}
//
//	}
//}
//
//void bfs(int idx) {
//	visit[s] = true;
//	q.push(idx);
//	while (!q.empty()) {
//		int v = q.front();
//		q.pop();
//		cout << v << " ";
//
//		for (int j = 1; j <= n; j++) {
//			if (map[v][j] == 1 && !visit[j]) {
//				visit[j] = true;
//				q.push(j);
//				
//			}
//		}
//
//	}
//
//}
//int main() {
//	cin >> n >> m >> s;
//	for (int i = 0; i < m; i++) {
//		int v1, v2;
//		cin >> v1 >> v2;
//		map[v1][v2] = 1;
//		map[v2][v1] = 1;
//	}
//
//	dfs(s);
//	cout << endl;
//
//	memset(visit, false, sizeof(visit));
//
//
//	bfs(s);
//
//
//}
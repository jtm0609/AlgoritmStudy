////문제: 바이러스
////알고리즘: dfs
//
//#include<iostream>
//using namespace std;
//
//int n; //컴퓨터수
//int l; //간선수
//int map[101][101];
//bool visit[101];
//int virus;
//void dfs(int idx) {
//	visit[idx] = true;
//	for (int j = 1; j <= n; j++) {
//		if (map[idx][j] == 1 && !visit[j]) {
//			virus++;
//			dfs(j);
//		}
//	}
//}
//int main() {
//	cin >> n;
//	cin >> l;
//	for (int i = 0; i < l; i++) {
//		int v1, v2;
//		cin >> v1 >> v2;
//		map[v1][v2] = 1;
//		map[v2][v1] = 1;
//	}
//
//	dfs(1);
//	cout << virus;
//
//}
////문제: 토마토
////알고리즘: bfs
////날짜체크하는법을 모르겠어서 https://rebas.kr/650 참고함
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int m, n;
//int map[1000][1000];
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//북동남서
//queue<pair<int,int>> q;
//int day;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + d[i][0];
//			int ny = y + d[i][1];
//			if (isInside(nx, ny)) {
//				if (map[nx][ny] == 0) {
//					map[nx][ny] = map[x][y] + 1;
//					q.push(pair<int, int>(nx, ny));
//				}
//			}
//		}
//
//	}
//}
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 1)
//				q.push(pair<int, int>(i, j));
//		}
//	}
//
//	bfs();
//
//	//날짜체크
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//익지않은게 있다면 모두익은게 아니므로 -1출력
//			if (map[i][j] == 0) {
//				cout << "-1" << endl;
//				return 0;
//			}
//
//			//가장큰 수가 마지막날짜임
//			//day를 1부터 시작했으므로 -1을 빼준다
//			if (day < map[i][j])
//				day = map[i][j]-1;
//		}
//	}
//	cout << day;
//
//}
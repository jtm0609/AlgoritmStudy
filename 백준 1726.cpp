////문제: 로봇(골드4)
////알고리즘: bfs최단거리
////푼날짜: 2020-12-24
////참고: https://jaimemin.tistory.com/909
//
//#include<iostream>
//#include<queue>
//using namespace std;
//struct INFO {
//	int x, y, d;
//};
//int m, n;
//int map[101][101];
//int check[101][101][5];
//INFO start, dest;
//int dir[5][2] = {
//	{0,0},{0,1}, {0,-1}, {1,0}, {-1,0}
//};//동서남북
//
//bool Isinside(int a, int b) {
//	return (a >= 0 && a < m) && (b >= 0 && b < n);
//}
//int BFS() {
//	queue<INFO> q;
//	q.push({ start.x,start.y,start.d });
//	while (!q.empty()) {
//		int x = q.front().x;
//		int y = q.front().y;
//		int d = q.front().d;
//		q.pop();
//
//		if (x == dest.x && y == dest.y && d == dest.d)
//			return check[x][y][d];
//
//		//현재 방향 직진
//		for (int i = 1; i <= 3; i++) {
//			int nx = x + dir[d][0] * i;
//			int ny = y + dir[d][1] * i;
//			if (check[nx][ny][d] || !Isinside(nx, ny))
//				continue;
//			if (map[nx][ny] == 0) {
//				q.push({ nx,ny,d });
//				check[nx][ny][d] = check[x][y][d] + 1;
//			}
//			//중요**** 이것때문에 1시간 디버깅함
//			//벽을 뚫을수없으므로 벽이나오면 break해줘야함
//			else break;
//
//		}
//
//		//방향 전환
//		for (int i = 1; i <= 4; i++) {
//			if (i == d || check[x][y][i]) continue;
//			if ((d == 1 && i == 2) || (d == 2 && i == 1) || (d == 3 && i == 4)
//				|| (d == 4 && i == 3)) {
//				q.push({ x,y,i });
//				check[x][y][i] = check[x][y][d] + 2;
//			}
//			else {
//				q.push({ x,y,i });
//				check[x][y][i] = check[x][y][d] + 1;
//			}
//		}
//	}
//
//	//목적지에 도착할수없는경우
//	//return -1;
//}
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < m; i++)
//		for (int j = 0; j < n; j++)
//			cin >> map[i][j];
//
//	cin >> start.x >> start.y >> start.d;
//	cin >> dest.x >> dest.y >> dest.d;
//	start.x--; start.y--; dest.x--; dest.y--;
//	int ret = BFS();
//	cout << ret;
//
//}
////문제: 나이트의 이동 (실버 2)
////알고리즘: BFS 최단거리
////문제 푼 날짜: 2020-12-21
//
//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//
//int dir[8][2] = {
//	{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}
//};
//int n; //체스판의 한변 길이
//int tar_x, tar_y;
//int map[305][305];
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//int bfs(int start_x, int start_y) {
//	queue<pair<int, int>> q;
//	q.push(make_pair(start_x, start_y));
//
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		if (x == tar_x && y == tar_y)
//			return map[x][y];
//
//		for (int d = 0; d < 8; d++) {
//			int nx = x + dir[d][0];
//			int ny = y + dir[d][1];
//			if (!isInside(nx, ny)) continue;
//			if (!map[nx][ny]) {
//				map[nx][ny] = map[x][y] + 1;
//				q.push(make_pair(nx, ny));
//			}
//		}
//	}
//
//
//	
//}
//int main() {
//	int t; //테스트케이스 개수
//	
//	cin >> t;
//	for(int i=0; i<t; i++){
//		cin >> n;	
//		int cur_x, cur_y;
//		cin >> cur_x >> cur_y;
//		cin >> tar_x >> tar_y;
//		
//		memset(map, 0, sizeof(map));
//		int ret=bfs(cur_x, cur_y);
//		cout << ret<<"\n";
//
//	
//	}
//	
//}
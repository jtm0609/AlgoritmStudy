////문제: 벽 부수고 이동하기
////알고리즘: bfs
////풀이: 벽을뚫고이동했을때와, 벽을 뚫지않고이동했을때를 구분하기위해 3차원배열을 이용
////참고: https://rebas.kr/658
////백준 2178(미로탐색)의 응용문제,( 2178에서는 벽을뚫는게아니라 단순히 최단거리문제임 )
//
////사용했던 테스트케이스
///*5 6
//010000
//010110
//010110
//010111
//000110
//*/
//#include<iostream>
//#include<cstdio>
//#include<queue>
//using namespace std;
//struct c {
//	int x, y, w;
//};
//int n, m;
//int map[1001][1001];
//int dist[1001][1001][2]; //x,y좌표: z:벽을뚫지않고갔을때, 벽을뚫고갔을때
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//북동남서
//queue <c> q;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//int bfs() {	
//	q.push({ 0,0,0 });
//	//처음칸도 수를새므로 1로 초기화
//	dist[0][0][0] = 1;
//	while (!q.empty()) {
//		int x = q.front().x;
//		int y = q.front().y;
//		int w = q.front().w;
//		q.pop();
//				
//		if (x == n - 1 && y == m - 1)
//			return dist[x][y][w];
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + d[i][0];
//			int ny = y + d[i][1];
//			if (!isInside(nx,ny)) continue;
//
//			//지났던길이면 continue;
//			//w가 0이면 벽을뚫지않고 경로를 이동했을때, w가 1이면 벽을 뚫고 경로를 이동했을때임
//			if (dist[nx][ny][w]) continue;
//
//			//벽이없다면
//			if (map[nx][ny] == 0) {
//				dist[nx][ny][w] = dist[x][y][w] + 1;
//				q.push({ nx,ny,w });
//			}
//			//벽을뚫은적이없고, 벽이있어서 벽을뚫고갔을때,
//			else if (w==0 && map[nx][ny] == 1 ) {
//				dist[nx][ny][1] = dist[x][y][w] + 1;
//				q.push({ nx,ny,1 });
//			}
//		
//
//		}
//	}
//	return -1;
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//	cout<<bfs();
//
//}
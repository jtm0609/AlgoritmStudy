////문제: 토마토 (실버1)
////알고리즘: BFS
////참고: https://jaimemin.tistory.com/642
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int N, M, H; //가로 세로 높이
//int map[101][101][101];
//bool visited[101][101][101];
//
//struct Dir {
//	int x, y, h;
//};
//Dir dir[6] = {
//	{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}
//}; 
//
//int noTomato;
//
//queue<Dir>q;
//bool isInside(int x, int y, int z) {
//	return (x >= 0 && x < N) && (y >= 0 && y < M) && (z >= 0 && z < H);
//}
//
//bool allRipe() {
//	int allTomato = M * N * H - noTomato; //전체 토마토개수
//	int ripeTomato = 0;
//	for (int h = 0; h < H; h++)
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				if (map[i][j][h] == 1) ripeTomato++;
//
//	return allTomato == ripeTomato;
//}
//
//
//int bfs() {
//	int day = 0;
//
//	while (!q.empty()) {
//		int currentSize = q.size();
//		for (int i = 0; i < currentSize; i++) {
//			int x = q.front().x;
//			int y = q.front().y;
//			int h = q.front().h;
//			q.pop();
//
//			for (int i = 0; i < 6; i++) {
//				int nx = x + dir[i].x;
//				int ny = y + dir[i].y;
//				int nh = h + dir[i].h;
//				//다음 토마토가 범위 안에 있고 
//				if (isInside(nx, ny, nh)) {
//					//안익엇을 경우에만
//					if (map[nx][ny][nh] == 0) {
//						map[nx][ny][nh] = 1;
//						q.push({ nx,ny,nh });
//					}
//				}
//			}
//			
//			//익힐수 있는 토마토를 전부 익혔고 전부 익었을경우
//			if (q.size() == 0 && allRipe())
//				return day;
//			//익힐수 있는 토마토는 전부 익혔지만 안 익은 토마토존재
//			else if (q.size() == 0 && !allRipe())
//				return -1;
//		}
//		day++;
//	}
//
//
//}
//int main() {
//	
//	cin >> M >> N >>H;
//	for (int h = 0; h < H; h++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				cin >> map[i][j][h];
//				if (map[i][j][h] == -1) { //토마토를 넣을수 없는칸
//					noTomato++; 
//				}
//				if (map[i][j][h] == 1) //익은 토마토 큐에넣기
//					q.push({ i,j,h });
//			}
//		}
//	}
//
//	//저장될때부터 토마토가 모두익어있는 상태
//	if (q.size()==M*N*H-noTomato) {
//		cout << 0;
//		return 0;
//	}
//
//
//	int ret = bfs();
//	cout << ret;
//
//}
////https://dragonitecio.tistory.com/768
////해설풀이보고 풀었음
//문제: 구슬탈출2
//알고리즘: bfs
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//int W, H;
//int cnt; //빨간공이 움직인횟수
//int rx, ry, bx, by;
//int nrx, nry, nbx, nby;
//int orx, ory, obx, oby;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//int visit[12][12][12][12];
//
//struct point {
//	int rx, ry, bx, by;
//};
//queue<point> q;
//vector<string>map;
//int ans;
//
//
//
//void bfs() {
//	while (!q.empty()) {
//		int qSize = q.size();
//		while (qSize--) {
//			//이동하기전 빨강,파랑공의 좌표
//			orx = q.front().rx;
//			ory = q.front().ry;
//			obx = q.front().bx;
//			oby = q.front().by;
//			q.pop();
//
//			//이동하기전의 빨강공의좌표가 구멍에있고 파란공은 구멍에없다면 탈출
//			if (map[orx][ory] == 'O' && map[obx][oby] != 'O') {
//				ans = cnt;
//				return;
//			}
//
//			//이동
//			for (int i = 0; i < 4; i++) {
//				rx = orx;
//				ry = ory;
//				bx = obx;
//				by = oby;
//
//				//빨강 공 이동
//				while (1) {
//					nrx = rx + dx[i];
//					nry = ry + dy[i];
//					//빨강 공이 벽을 만나거나, 구멍에 들어가면 탈출
//					if (map[nrx][nry] == '#' || map[rx][ry] == 'O')
//						break;
//					rx = nrx;
//					ry = nry;
//				}
//
//				//파랑 공 이동
//				while (1) {
//					nbx = bx + dx[i];
//					nby = by + dy[i];
//					//파랑 공이 벽을 만나거나, 구멍에 들어가면 탈출
//					if (map[nbx][nby] == '#' || map[bx][by] == 'O')break;
//					bx = nbx;
//					by = nby;
//				}
//
//				//빨강 공과 파랑공의 좌표가 같다면 이동하기전 좌표를 고려해서 재조정
//				
//				if (rx == bx && ry == by) {
//					//파랑공이 구멍에 들어가면 안되므로, continue해서 다시이동
//					if (map[bx][by] == 'O') continue;
//					if(abs(orx-rx)+ abs(ory-ry)> abs(obx-bx) + abs(oby-by)){
//						rx -= dx[i];
//						ry -= dy[i];
//					}
//					else {
//						bx -= dx[i];
//						by -= dy[i];
//					}
//				}
//
//				//전에 이동했던방향으로 또이동하면 다시 거꾸로가는형태이므로 continue로 다시이동
//				if (visit[rx][ry][bx][by]) continue;
//				visit[rx][ry][bx][by] = 1;
//
//				//다시 bfs
//				q.push({ rx,ry,bx,by });
//
//
//			}
//		}
//		if (cnt == 10) {
//			ans = -1;
//			return;
//		}
//		cnt++;
//	}
//
//	//큐가먼저 끝나는경우
//	ans = -1;
//	return;
//}
//
//
//int main() {
//	
//	//입력부분
//	cin >> W >> H;
//	for (int i = 0; i < W; i++) {
//		string str;
//		cin >> str;
//		map.push_back(str);
//		for (int j = 0; j < H; j++) {
//			if (map[i][j] == 'R') {
//				rx = i;
//				ry = j;
//				map[i][j] = '.';
//			}
//			else if (map[i][j] == 'B') {
//				bx = i;
//				by = j;
//				map[i][j] = '.';
//			}
//		}
//	}
//
//	visit[rx][ry][bx][by] = 1;
//	q.push({ rx,ry,bx,by });
//	bfs();
//	cout << ans;
//}
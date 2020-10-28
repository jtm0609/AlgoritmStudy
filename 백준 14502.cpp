////https://jongnan.tistory.com/entry/%EB%B0%B1%EC%A4%80-14502-%EC%97%B0%EA%B5%AC%EC%86%8C 보고풀었음
////문제: 연구소
////알고리즘: BFS+브르투포스
//
//
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<string.h> //memcpy를 사용하기위해
//
//using namespace std;
//int lab[8][8]; //맵
//int tempLab[8][8]; //맵을 복사할 배열
//int n, m;
//int ans = 0;
//int d[4][2] = { {0,-1},{0,1},{-1,0},{1,0} }; //좌,우, 상,하
//
////배열의조건
//bool isInside(int x, int y) {
//	return (x >= 0 && x < n) && (y >= 0 && y < m);
//}
//
//
////바이러스 퍼트리기(BFS)
//void virusSpread() {
//	//3개의 벽으로 막아졌다면, 바이러스가 퍼지게한후, 연구소의 상황을 저장
//	int spreadLab[8][8];
//	memcpy(spreadLab, tempLab, sizeof(tempLab));
//	queue<pair<int, int>>q;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			if (spreadLab[i][j] == 2)
//				q.push(make_pair(i, j));
//
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		//네방향으로 바이러스 전파
//		for (int i = 0; i < 4; i++) {
//			int nx = x + d[i][0];
//			int ny = y + d[i][1];
//			//연구소 범위 안에 감염되지 않은 영역만 오염시킬수있음
//			if (isInside(nx,ny)) {
//				if (spreadLab[nx][ny] == 0) {
//					spreadLab[nx][ny] = 2;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//	//안전영역 체크
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (spreadLab[i][j] == 0)
//				cnt += 1;
//		}
//	}
//	//기존경우의수 안전영역보다 현재경우의수 안전영역이 더크다면 갱신
//	ans = max(ans, cnt);
//
//}
//
//void wall(int cnt) {
//	//3개의 벽이 세워 졌을 때, 바이러스를 퍼트린다.
//	if (cnt == 3) {
//		virusSpread();
//		return;
//	}
//	//벽세우는 부분
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (tempLab[i][j] == 0) {
//				tempLab[i][j] = 1;
//				wall(cnt + 1);
//				//모든 경우의 수를 넣어야하므로 역시 백: 다시초기화
//				tempLab[i][j] = 0;
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	//입력부분
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> lab[i][j];
//		}
//	}
//
//	//브루트포스로 벽을세우고-> bfs로 바이러스전파
//	//연구소에서 0인 부분을 모두 벽을 세워야함(모든경우의 수를 따져야함)
//	//일단 하나의 벽을 세운후 나머지 2개의 벽을 재귀함수를 통해 세움
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (lab[i][j] == 0) {
//				memcpy(tempLab, lab, sizeof(tempLab));
//				tempLab[i][j] = 1;
//				//재귀
//				wall(1);
//				//백: 다시초기화
//				tempLab[i][j] = 0;
//			}
//		}
//	}
//
//	cout << ans;
//}
//

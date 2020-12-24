////문제: 스타트 택시 골드4
////알고리즘: bfs 구현, 최단거리
////참조 : https://na982.tistory.com/129 na982님 강의 보고품
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//
//const int WALL = -1;
//const int EMPTY = -2;
//const int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//북동남서
//int N, M, fuel;
//int taxi_x, taxi_y;
//int board[20][20];
//
//struct CUSTOMER{
//	int start;
//	int end;
//};
//
//struct TAXI {
//	int pos;
//	int distance;
//};
//
//CUSTOMER customer[400];
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < N) && ((b >= 0 && b < N));
//}
//
//int find_customer() {
//	queue<TAXI> q;
//	bool visited[20][20] = { false, };
//	TAXI cur = { taxi_x * 100 + taxi_y,0 };
//	visited[taxi_x][taxi_y] = true;
//	q.push(cur);
//
//	int candi_size = 0;
//	int candi[400] = { 0, };
//	int candi_distance = -1;
//
//	//최단거리 탐색
//	while (!q.empty()) {
//		cur = q.front();
//		q.pop();
//
//		//최단 거리의 손님을 찾았다면
//		if (candi_distance != -1 && cur.distance > candi_distance) {
//			break;
//		}
//
//		int x = cur.pos / 100;
//		int y = cur.pos % 100;
//
//		//최단거리의 손님이 현재 택시 좌표에있다면
//		if (board[x][y] >= 0) {
//			candi[candi_size++] = board[x][y];
//			candi_distance = cur.distance;
//		}
//
//		//4방향탐색
//		for (int d = 0; d < 4; d++) {
//			int nx = x + dir[d][0];
//			int ny = y + dir[d][1];
//			if (!isInside(nx, ny) || board[nx][ny] == WALL || visited[nx][ny]==true) {
//				continue;
//			}
//			visited[nx][ny] = true;
//			TAXI next = { nx * 100 + ny,cur.distance + 1 };
//			q.push(next);
//
//		}
//
//	}
//	//최단거리보다 연료양이적다면 
//	if (candi_distance > fuel) {
//		return -1;
//	}
//	int target = -1;
//	int candi_val = 10000;
//	//최단거리 손님이 여러명이라면
//	for (int i = 0; i < candi_size; i++) {
//		if (candi_val > customer[candi[i]].start) {
//			candi_val = customer[candi[i]].start;
//			target = candi[i];
//		}
//	}
//	//택시값 갱신
//	taxi_x = customer[target].start / 100;
//	taxi_y = customer[target].start % 100;
//	//손님을태운칸 빈칸으로 바꾸기
//	board[taxi_x][taxi_y] = EMPTY;
//	//최단거리만큼 연료소모
//	fuel -= candi_distance;
//	return target;
//
//}
//
//bool move_customer(int target) {
//	queue<TAXI>q;
//	bool visited[20][20] = { false, };
//	TAXI cur = { taxi_x * 100 + taxi_y,0 };
//	visited[taxi_x][taxi_y] = true;
//	q.push(cur);
//
//	while (!q.empty()) {
//		cur = q.front();
//		q.pop();
//
//		if (cur.distance > fuel) {
//			return false;
//		}
//
//		//목적지에 도착했다면
//		if (cur.pos == customer[target].end) {
//			taxi_x = customer[target].end / 100;
//			taxi_y = customer[target].end % 100;
//
//			//연료 증가
//			fuel += cur.distance;
//			return true;
//		}
//
//		int x = cur.pos / 100;
//		int y = cur.pos % 100;
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (!isInside(nx, ny) || board[nx][ny] == WALL || visited[nx][ny] == true) {
//				continue;
//			}
//			TAXI next = { nx * 100 + ny, cur.distance + 1 };
//			q.push(next);
//			visited[nx][ny] = true;
//		}
//	}
//	//모두 탐색할동안 손님을 목적지에 도착하게못했으면 122~130라인을 타지 못했을것임
//	return false;
//}
//
//
//int solve() {
//	int ret = -1;
//	for (int i = 0; i < M; i++) {
//		//최단거리 고객찾기
//		int target = find_customer();
//		//고객을 찾을수없다면
//		if (target == -1) {
//			return ret;
//		}
//		
//		//고객을 목적지까지 도착
//		bool success = move_customer(target);
//		//목적지까지 도착하게못했다면
//		if (success == false) {
//			return ret;
//		}
//
//	}
//	ret = fuel;
//	return ret;
//
//
//}
//int main() {
//	cin >> N >> M >> fuel;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> board[i][j];
//			board[i][j] -= 2;
//		}
//	}
//
//	cin >> taxi_x >> taxi_y;
//	taxi_x--, taxi_y--;
//	for (int i = 0; i < M; i++) {
//		int sx, sy, ex, ey;
//		cin >> sx>> sy >> ex >> ey;
//		sx--, sy--, ex--, ey--;
//		customer[i].start = sx * 100 + sy;
//		customer[i].end = ex * 100 + ey;
//		board[sx][sy] = i;
//	}
//	
//	int ret=solve();
//	cout << ret;
//}
//

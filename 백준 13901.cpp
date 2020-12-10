////문제: 로봇
////알고리즘: 구현
////https://j2wooooo.tistory.com/88 약간참조
//#include<iostream>
//using namespace std;
//int r, c; //방크기
//int k; //장애물개수
//int pos_x, pos_y; //로봇의 위치
//int map[1003][10003];
//bool visited[1003][1003];
//int move_dir[4];
//int dir[5][2] = { {0,0},{-1,0},{1,0},{0,-1}, {0,1} };//북남서동
//bool isInside(int a,int b){
//	return (a >= 0 && a < r) && (b >= 0 && b < c);
//}
//void solve(int start_x, int start_y) {
//	pos_x = start_x; pos_y = start_y;
//	visited[start_x][start_y] = true;
//	int count = 0;
//	int i = 0;
//	int nx, ny;
//	while (1) {
//		//종료조건
//		if (count == 4) {
//			return;
//		}
//		nx = pos_x + dir[move_dir[i]][0];
//		ny = pos_y + dir[move_dir[i]][1];
//		
//		//장애물이있거나, 벽이거나 방문했다면
//		if (map[nx][ny] == 1 || !isInside(nx, ny) || visited[nx][ny]) {
//			i = (i + 1) % 4;
//			count++;
//			continue;
//		}
//		//이동
//		pos_x = nx; pos_y = ny;
//		visited[pos_x][pos_y] = true;
//		count = 0;
//	}
//}
//int main() {
//	cin >> r >> c;
//	cin >> k;
//	//장애물 위치 입력
//	for (int i = 0; i < k; i++) {
//		int x, y;
//		cin >> x >> y;
//		map[x][y] = 1;
//	}
//	//로봇 시작위치 입력
//	cin >> pos_x >> pos_y;
//	//사용자지정 방향 입력
//	for (int i = 0; i < 4; i++) {
//		cin >> move_dir[i];
//	}
//	solve(pos_x, pos_y);
//	cout << pos_x <<" "<< pos_y;
//
//
//}
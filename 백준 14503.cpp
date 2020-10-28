////문제: 로봇청소기
////알고리즘: 시뮬레이션
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//북동남서
////int rotation[4][2] = { {0,-1},{-1,0},{0,1},{1,0} };//서북동남
//bool clean[50][50];
//bool map[50][50];
//int cnt = 0;
//
//int rotationDir(int dir) {
//	//북->서
//	if (dir == 0)
//		return 3;
//	//동->북
//	else if (dir == 1)
//		return 0;
//	//남->동
//	else if (dir == 2)
//		return 1;
//	//서->남
//	else if (dir == 3)
//		return 2;
//
//
//}
//
//int main() {
//	int x, y; //가로,세로
//	int cur_x, cur_y, dir; //로봇의 현재좌표, 방향
//	cin >> x >> y;
//	cin >> cur_x >> cur_y >> dir;
//
//	//입력
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			int num;
//			cin >> num;
//			map[i][j] = num;
//			clean[i][j] = false;
//		}
//
//	}
//
//	while (1) {
//		
//		//청소
//		if (map[cur_x][cur_y] == 0 && !clean[cur_x][cur_y]) {
//			clean[cur_x][cur_y] = true;
//			cnt++;
//		}
//		int new_d = rotationDir(dir);
//		int new_x = cur_x + d[new_d][0];
//		int new_y = cur_y + d[new_d][1];
//
//
//		//네 방향 검사
//		int block = 0;
//		for (int i = 0; i < 4; i++) {
//			int temp_x = cur_x + d[i][0];
//			int temp_y = cur_y + d[i][1];
//			if (clean[temp_x][temp_y] || map[temp_x][temp_y] == 1)
//				block++;
//		}
//
//		//네 방향 모두 청소가 되어있거나 벽인경우
//		if (block == 4) {
//			new_x = cur_x - d[dir][0];
//			new_y = cur_y - d[dir][1];
//			//뒤쪽이 벽인경우 작동멈춤
//			if (map[new_x][new_y] == 1)
//				break;
//
//			cur_x = new_x;
//			cur_y = new_y;
//			continue;
//		}
//
//
//
//		//왼쪽방향이 청소하지않은 공간이고 벽이아니라면 회전후 그방향으로 전진
//		if (!clean[new_x][new_y] && map[new_x][new_y]==0) {
//			dir = new_d;
//			cur_x = new_x;
//			cur_y = new_y;
//			continue;
//		}
//		//청소되어있거나 벽이면 회전만
//		else if (clean[new_x][new_y] || map[new_x][new_y]==1) {
//			dir = new_d;
//		}
//
//			
//	}
//	cout << cnt;
//
//
//
//}
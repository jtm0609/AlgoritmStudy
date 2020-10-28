////문제: 드래곤커브
////알고리즘: 시뮬레이션
////y좌표가음수이므로 반시계방향
////https://na982.tistory.com/97 참조하여풀었음
////1. 먼저 각좌표당 방향를 저장한후, 
////2. 좌표에서 저장된방향에따라 회전이동시킴
//
//#include <iostream>
//#include<vector>
//using namespace std;
//int n;\
//int map[101][101];
//bool isInside(int a, int b) {
//	return (a >= 0 && a < 101) && (b >= 0 && b < 101);
//}
//int dir[4][2] = { {0,1},{-1,0},{0,-1},{1,0} };//동북서남
//
//
////각좌표의 방향
//
//int main() {
//	cin >> n;
//
//	for (int a = 0; a < n; a++) {
//		int x, y, d, g;
//		int curve[1024];
//		int curve_size = 0;
//		cin >> x >> y >> d >> g;
//
//		//시작지점 방향	
//		curve[curve_size++] = d;
//		map[y][x] = 1;
//
//		//각좌표들의 방향설정
//		//마지막세대전까지,(마지막세대는 최종드래곤커브이므로 방향을 저장할필요없음)
//		for (int i = 0; i < g; i++) {
//			for (int j = curve_size - 1; j >= 0; j--) {
//				curve[curve_size++] = (curve[j] + 1) % 4;
//			}
//		}
//
//		//그리기
//		for (int i = 0; i < curve_size; i++) {
//			y += dir[curve[i]][0];
//			x += dir[curve[i]][1];
//			if (!isInside(x, y))
//				continue;
//			map[y][x] = 1;
//		}
//	}
//
//	int ret = 0;
//		//사각형체크
//	for (int y = 0; y < 100; y++) {
//		for (int x = 0; x < 100; x++) {
//			if (map[y][x] && map[y][x + 1] && map[y + 1][x] && map[y + 1][x + 1])
//				ret++;
//		}
//	}
//	cout << ret;
//
//
//
//	
//}

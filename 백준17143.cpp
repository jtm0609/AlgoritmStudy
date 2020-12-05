//#include<iostream>
//using namespace std;
//
//struct CELL {
//	int s, d, z;
//};
//
//int r, c, m;
//CELL map[2][100][100];
//
//int fishing(int cur, int pos) {
//	int size = 0;
//	for (int x = 0; x < r; x++) {
//		if (map[cur][x][pos].z != 0) {
//			size = map[cur][x][pos].z;
//			map[cur][x][pos].s = 0;
//			map[cur][x][pos].d = 0;
//			map[cur][x][pos].z = 0;
//			break;
//		}
//	}
//	return size;
//}
//
//void move(int cur) {
//	int next = (cur + 1) % 2;
//	for (int x = 0; x < r; x++) {
//		for (int y = 0; y < c; y++) {
//			map[next][x][y].s = 0;
//			map[next][x][y].d = 0;
//			map[next][x][y].z = 0;
//		}
//	}
//
//	for (int x = 0; x < r; x++) {
//		for (int y = 0; y < c; y++) {
//			if (map[cur][x][y].z != 0) {
//				//y감소
//				if (map[cur][x][y].d == 1) {
//					int nx = (((r - 1) * 2) - x) + map[cur][x][y].s;
//					nx = (nx % (r - 1) * 2);
//					int nd = 2;
//					if (nx >= (r - 1)) {
//						nx = ((r - 1) * 2) - nx;
//						nd = 1;
//					}
//					//상어크기 비교
//					if (map[next][nx][y].z < map[cur][x][y].z) {
//						map[next][nx][y].s = map[cur][x][y].s;
//						map[next][nx][y].d = nd;
//						map[next][nx][y].z = map[cur][x][y].z;
//					}
//				}
//				//y증가
//				else if (map[cur][x][y].d == 2) {
//					int nx = x + map[cur][x][y].s;
//					nx = (nx % (r - 1) * 2);
//					int nd = 2;
//					if (nx >= (r - 1)) {
//						nx = ((r - 1) * 2) - nx;
//						nd = 1;
//					}
//					//상어크기 비교
//					if (map[next][nx][y].z < map[cur][x][y].z) {
//						map[next][nx][y].s = map[cur][x][y].s;
//						map[next][nx][y].d = nd;
//						map[next][nx][y].z = map[cur][x][y].z;
//					}
//
//				}
//
//				//x증가
//				else if (map[cur][x][y].d == 3) {
//					int ny = y + map[cur][x][y].s;
//					ny = (ny % (c - 1) * 2);
//					int nd = 3;
//					if (ny >= (c - 1)) {
//						ny = ((c - 1) * 2) - ny;
//						nd = 4;
//					}
//					//상어크기 비교
//					if (map[next][x][ny].z < map[cur][x][y].z) {
//						map[next][x][ny].s = map[cur][x][y].s;
//						map[next][x][ny].d = nd;
//						map[next][x][ny].z = map[cur][x][y].z;
//					}
//
//				}
//
//				else if (map[cur][x][y].d == 4) {
//					int ny = (((c - 1) * 2) - y) + map[cur][x][y].s;
//					ny = (ny % (c - 1) * 2);
//					int nd = 3;
//					if (ny >= (c - 1)) {
//						ny = ((c - 1) * 2) - ny;
//						nd = 4;
//					}
//					//상어크기 비교
//					if (map[next][x][ny].z < map[cur][x][y].z) {
//						map[next][x][ny].s = map[cur][x][y].s;
//						map[next][x][ny].d = nd;
//						map[next][x][ny].z = map[cur][x][y].z;
//					}
//
//
//
//				}
//			}
//		}
//	}
//
//}
//
//int main() {
//	cin >> r >> c >> m;
//	int x, y, cur = 0;
//	for (int i = 0; i < m; i++) {
//		cin >> x >> y;
//		--x; --y;
//		cin >> map[cur][x][y].s >> map[cur][x][y].d >> map[cur][x][y].z;
//	}
//
//	int ret = 0;
//	for (int pos = 0; pos < c; pos++) {
//		ret += fishing(cur, pos);
//		move(cur);
//		cur = (cur + 1) % 2;
//	}
//	cout << ret;
//}
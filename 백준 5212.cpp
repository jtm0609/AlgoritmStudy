////문제: 지구온난화 실버2
////알고리즘 :구현
////설계부분 참고 : https://beyond1.tistory.com/47?category=796145
////코드는 내가 작성함
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//int R, C;
//char map[10][10];
//char temp[10][10];
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //북동남서
//bool isInside(int a, int b) {
//	return (a >= 0 && a < R) && (b >= 0 && b < C);
//}
//int main() {
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//	memcpy(temp, map, sizeof(map));
//	//빙하녹이기(땅잠기기)
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			//땅이라면 
//			if (map[i][j] == 'X') {
//				int cnt=0;
//				for (int d = 0; d < 4; d++) {
//					int nx = i + dir[d][0];
//					int ny = j + dir[d][1];
//					if (!isInside(nx, ny)) {
//						cnt++;
//						continue;
//					}
//					if (map[nx][ny] == '.') cnt++;
//
//				}
//				if (cnt >= 3)
//					temp[i][j] = '.';
//			}
//		}
//	}
//	//맵줄이기
//	//X가있는곳의 x,y좌표의 최소 최대값구하기
//	int minX=10000, maxX=0, minY=10000, maxY=0;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			if (temp[i][j] == 'X') {
//				minX = min(minX, i);
//				maxX = max(maxX, i);
//				minY = min(minY, j);
//				maxY = max(maxY, j);
//			}
//		}
//	}
//	
//	//50년후 지도 출력
//	for (int i = minX; i <=maxX; i++) {
//		for (int j = minY; j <= maxY; j++) {
//			cout << temp[i][j];
//		}
//		cout << endl;
//	}
//
//}
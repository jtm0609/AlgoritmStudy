////����: �����³�ȭ �ǹ�2
////�˰��� :����
////����κ� ���� : https://beyond1.tistory.com/47?category=796145
////�ڵ�� ���� �ۼ���
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//int R, C;
//char map[10][10];
//char temp[10][10];
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //�ϵ�����
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
//	//���ϳ��̱�(������)
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			//���̶�� 
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
//	//�����̱�
//	//X���ִ°��� x,y��ǥ�� �ּ� �ִ밪���ϱ�
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
//	//50���� ���� ���
//	for (int i = minX; i <=maxX; i++) {
//		for (int j = minY; j <= maxY; j++) {
//			cout << temp[i][j];
//		}
//		cout << endl;
//	}
//
//}
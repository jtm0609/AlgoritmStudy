////���� : ���� �̼�����, �ȳ� (���5)
////��ȯ�κ�(workingClean)�� https://mygumi.tistory.com/351 �������� (�̻��ó�� ����Ȯ��κ��� queue�� Ǯ���)
//#include<iostream>
//#include<vector>
//#include<cstring>
//using namespace std;
//
//int r, c, T;
//int map[52][52];
//int temp[52][52];
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //�ϵ�����
//int ccw[] = { 1,0,3,2 };
//int cw[] = {1,2,3,0}; //�ð�
//vector < pair<int, int>> cleaner;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < r) && (b >= 0 && b < c);
//}
//void spreadDust() {
//	int nx, ny,cnt;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			//�̼��������ִٸ�
//			if (map[i][j] >= 1) {
//				//�ֺ� �̼�����Ž��
//				cnt = 0;
//				for (int d = 0; d < 4; d++) {
//					nx = i + dir[d][0];
//					ny = j + dir[d][1];
//					if (isInside(nx, ny) && map[nx][ny] >= 0) {
//						temp[nx][ny] += map[i][j] / 5;
//						cnt++;
//					}
//				}
//				temp[i][j] += map[i][j] - (map[i][j] / 5) * cnt;
//			}
//
//			//����û���Ⱑ �ִٸ�
//			else if (map[i][j] == -1) temp[i][j] = -1;
//		}
//	}
//
//}
//
//void workingClean(int cleanerX, int cleanerY,int dirr[]) {
//	int x = cleanerX;
//	int y = cleanerY+1;
//	map[x][y] = 0;
//	for (int k = 0; k < 4; k++) {
//		while (1) {
//			int nx = x + dir[dirr[k]][0];
//			int ny = y + dir[dirr[k]][1];
//			if (!isInside(nx, ny)) break;
//			//����û���⿡ �����ϸ� while�� Ż��
//			if (cleanerX == nx && cleanerY == ny) break;
//			map[nx][ny] = temp[x][y]; 
//			x = nx;
//			y = ny;
//		}
//		
//
//	}
//
//}
//int countingDust() {
//	int ret = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (map[i][j] > 0)
//				ret += map[i][j];
//		}
//	}
//	return ret;
//}
//int main() {
//	int t=0;
//	cin >> r >> c >> T;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == -1) cleaner.push_back(make_pair(i, j));
//		}
//	}
//	while (1) {
//		t++;
//		memset(temp, 0, sizeof(temp));
//		spreadDust(); //���� Ȯ��
//		
//		memcpy(map, temp, sizeof(map));
//
//		workingClean(cleaner[0].first,cleaner[0].second,ccw); //�� ����û�����۵�
//		workingClean(cleaner[1].first, cleaner[1].second,cw); //�Ʒ� ����û�����۵�	
//
//
//		if (t == T) break;
//
//	}
//	int ret = countingDust(); //������ ī����
//	cout << ret;
//}
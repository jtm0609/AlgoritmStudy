////����: �丶��
////�˰���: bfs
////��¥üũ�ϴ¹��� �𸣰ھ https://rebas.kr/650 ������
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int m, n;
//int map[1000][1000];
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//�ϵ�����
//queue<pair<int,int>> q;
//int day;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + d[i][0];
//			int ny = y + d[i][1];
//			if (isInside(nx, ny)) {
//				if (map[nx][ny] == 0) {
//					map[nx][ny] = map[x][y] + 1;
//					q.push(pair<int, int>(nx, ny));
//				}
//			}
//		}
//
//	}
//}
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 1)
//				q.push(pair<int, int>(i, j));
//		}
//	}
//
//	bfs();
//
//	//��¥üũ
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//���������� �ִٸ� ��������� �ƴϹǷ� -1���
//			if (map[i][j] == 0) {
//				cout << "-1" << endl;
//				return 0;
//			}
//
//			//����ū ���� ��������¥��
//			//day�� 1���� ���������Ƿ� -1�� ���ش�
//			if (day < map[i][j])
//				day = map[i][j]-1;
//		}
//	}
//	cout << day;
//
//}
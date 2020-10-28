////https://jongnan.tistory.com/entry/%EB%B0%B1%EC%A4%80-14502-%EC%97%B0%EA%B5%AC%EC%86%8C ����Ǯ����
////����: ������
////�˰���: BFS+�긣������
//
//
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<string.h> //memcpy�� ����ϱ�����
//
//using namespace std;
//int lab[8][8]; //��
//int tempLab[8][8]; //���� ������ �迭
//int n, m;
//int ans = 0;
//int d[4][2] = { {0,-1},{0,1},{-1,0},{1,0} }; //��,��, ��,��
//
////�迭������
//bool isInside(int x, int y) {
//	return (x >= 0 && x < n) && (y >= 0 && y < m);
//}
//
//
////���̷��� ��Ʈ����(BFS)
//void virusSpread() {
//	//3���� ������ �������ٸ�, ���̷����� ����������, �������� ��Ȳ�� ����
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
//		//�׹������� ���̷��� ����
//		for (int i = 0; i < 4; i++) {
//			int nx = x + d[i][0];
//			int ny = y + d[i][1];
//			//������ ���� �ȿ� �������� ���� ������ ������ų������
//			if (isInside(nx,ny)) {
//				if (spreadLab[nx][ny] == 0) {
//					spreadLab[nx][ny] = 2;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//	//�������� üũ
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (spreadLab[i][j] == 0)
//				cnt += 1;
//		}
//	}
//	//��������Ǽ� ������������ �������Ǽ� ���������� ��ũ�ٸ� ����
//	ans = max(ans, cnt);
//
//}
//
//void wall(int cnt) {
//	//3���� ���� ���� ���� ��, ���̷����� ��Ʈ����.
//	if (cnt == 3) {
//		virusSpread();
//		return;
//	}
//	//������� �κ�
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (tempLab[i][j] == 0) {
//				tempLab[i][j] = 1;
//				wall(cnt + 1);
//				//��� ����� ���� �־���ϹǷ� ���� ��: �ٽ��ʱ�ȭ
//				tempLab[i][j] = 0;
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	//�Էºκ�
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> lab[i][j];
//		}
//	}
//
//	//���Ʈ������ ���������-> bfs�� ���̷�������
//	//�����ҿ��� 0�� �κ��� ��� ���� ��������(������� ���� ��������)
//	//�ϴ� �ϳ��� ���� ������ ������ 2���� ���� ����Լ��� ���� ����
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (lab[i][j] == 0) {
//				memcpy(tempLab, lab, sizeof(tempLab));
//				tempLab[i][j] = 1;
//				//���
//				wall(1);
//				//��: �ٽ��ʱ�ȭ
//				tempLab[i][j] = 0;
//			}
//		}
//	}
//
//	cout << ans;
//}
//

////����: ������1ȣ
////�˰���: ����
////������ �߸��о 11~12���� ����κж����� �ð��� �����ɷ���
////���� �������ƴ��پ˰� https://octorbirth.tistory.com/443 �����ϰ� �ڵ带 �Ϻμ�������(�����ڵ�� ���⹮�����ذ��ϸ� �´¹�������)
//#include<iostream>
//using namespace std;
//
//int n, m;
//char map[502][502];
//char direction[] = { 'U','R','D','L' };
//int dir[4][2] = { {-1,0},{0,1}, {1,0}, {0,-1} };//�ϵ�����
//int right_dir[4] = { 1,0,3,2 };//���ϼ���
//int left_dir[4] = { 3,2,1,0 }; //��������
//int ans_cnt, ans_dir;
//bool isVoyager;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//void solve(int start_x, int start_y, int start_dir) {
//	int x = start_x, y = start_y;
//	int cnt = 1; int d = start_dir;
//		while (1) {
//			x = x + dir[d][0];
//			y = y + dir[d][1];
//
//			//��Ȧ�̳� ����ũ�⸦ �����
//			if (map[x][y] == 'C' || !isInside(x, y)) {
//				if (cnt > ans_cnt) {
//					ans_cnt = cnt;
//					ans_dir = start_dir;
//				}
//				return;
//			}
//
//			//���ѷ����϶�
//			if (x == start_x && y == start_y && d == start_dir) {
//				ans_dir = start_dir;
//				isVoyager = true;
//				return;
//			}
//	
//			//������ȯ
//			if (map[x][y] == '/') d = right_dir[d];
//			else if (map[x][y] == '\\') d = left_dir[d];
//
//			cnt++;
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	int start_x, start_y;
//	cin >> start_x >> start_y;
//	start_x--; start_y--;
//
//	for (int startDir = 0; startDir < 4; startDir++) {
//		if(!isVoyager)
//		solve(start_x, start_y, startDir);
//	}
//	
//	cout << direction[ans_dir]<<endl;
//	if (isVoyager) cout << "Voyager";
//	else cout << ans_cnt << endl;
//
//}
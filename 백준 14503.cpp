////����: �κ�û�ұ�
////�˰���: �ùķ��̼�
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//�ϵ�����
////int rotation[4][2] = { {0,-1},{-1,0},{0,1},{1,0} };//���ϵ���
//bool clean[50][50];
//bool map[50][50];
//int cnt = 0;
//
//int rotationDir(int dir) {
//	//��->��
//	if (dir == 0)
//		return 3;
//	//��->��
//	else if (dir == 1)
//		return 0;
//	//��->��
//	else if (dir == 2)
//		return 1;
//	//��->��
//	else if (dir == 3)
//		return 2;
//
//
//}
//
//int main() {
//	int x, y; //����,����
//	int cur_x, cur_y, dir; //�κ��� ������ǥ, ����
//	cin >> x >> y;
//	cin >> cur_x >> cur_y >> dir;
//
//	//�Է�
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
//		//û��
//		if (map[cur_x][cur_y] == 0 && !clean[cur_x][cur_y]) {
//			clean[cur_x][cur_y] = true;
//			cnt++;
//		}
//		int new_d = rotationDir(dir);
//		int new_x = cur_x + d[new_d][0];
//		int new_y = cur_y + d[new_d][1];
//
//
//		//�� ���� �˻�
//		int block = 0;
//		for (int i = 0; i < 4; i++) {
//			int temp_x = cur_x + d[i][0];
//			int temp_y = cur_y + d[i][1];
//			if (clean[temp_x][temp_y] || map[temp_x][temp_y] == 1)
//				block++;
//		}
//
//		//�� ���� ��� û�Ұ� �Ǿ��ְų� ���ΰ��
//		if (block == 4) {
//			new_x = cur_x - d[dir][0];
//			new_y = cur_y - d[dir][1];
//			//������ ���ΰ�� �۵�����
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
//		//���ʹ����� û���������� �����̰� ���̾ƴ϶�� ȸ���� �׹������� ����
//		if (!clean[new_x][new_y] && map[new_x][new_y]==0) {
//			dir = new_d;
//			cur_x = new_x;
//			cur_y = new_y;
//			continue;
//		}
//		//û�ҵǾ��ְų� ���̸� ȸ����
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
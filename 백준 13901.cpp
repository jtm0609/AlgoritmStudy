////����: �κ�
////�˰���: ����
////https://j2wooooo.tistory.com/88 �ణ����
//#include<iostream>
//using namespace std;
//int r, c; //��ũ��
//int k; //��ֹ�����
//int pos_x, pos_y; //�κ��� ��ġ
//int map[1003][10003];
//bool visited[1003][1003];
//int move_dir[4];
//int dir[5][2] = { {0,0},{-1,0},{1,0},{0,-1}, {0,1} };//�ϳ�����
//bool isInside(int a,int b){
//	return (a >= 0 && a < r) && (b >= 0 && b < c);
//}
//void solve(int start_x, int start_y) {
//	pos_x = start_x; pos_y = start_y;
//	visited[start_x][start_y] = true;
//	int count = 0;
//	int i = 0;
//	int nx, ny;
//	while (1) {
//		//��������
//		if (count == 4) {
//			return;
//		}
//		nx = pos_x + dir[move_dir[i]][0];
//		ny = pos_y + dir[move_dir[i]][1];
//		
//		//��ֹ����ְų�, ���̰ų� �湮�ߴٸ�
//		if (map[nx][ny] == 1 || !isInside(nx, ny) || visited[nx][ny]) {
//			i = (i + 1) % 4;
//			count++;
//			continue;
//		}
//		//�̵�
//		pos_x = nx; pos_y = ny;
//		visited[pos_x][pos_y] = true;
//		count = 0;
//	}
//}
//int main() {
//	cin >> r >> c;
//	cin >> k;
//	//��ֹ� ��ġ �Է�
//	for (int i = 0; i < k; i++) {
//		int x, y;
//		cin >> x >> y;
//		map[x][y] = 1;
//	}
//	//�κ� ������ġ �Է�
//	cin >> pos_x >> pos_y;
//	//��������� ���� �Է�
//	for (int i = 0; i < 4; i++) {
//		cin >> move_dir[i];
//	}
//	solve(pos_x, pos_y);
//	cout << pos_x <<" "<< pos_y;
//
//
//}
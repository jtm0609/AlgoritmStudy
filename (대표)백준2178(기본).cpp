////https://blockdmask.tistory.com/182 �����ؼ� Ǯ����
////�̷�Ž�� �ִܰŸ�
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int n, m;//�����
//string map[100]; //�����ִ��� ������
//int check[100][100]; //�����±� ���
//int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} }; //�����¿�
//
//
////�迭�� ���ǿ� �����ϴ����˻�
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//
//int bfs() {
//	int cur_x = 0, cur_y = 0;
//
//	queue<pair<int, int>> q;
//	q.push(pair<int, int>(cur_x, cur_y));
//	check[cur_x][cur_y] = 1; //bfs�� �������鼭 ���°���� �� ���� �����ߴ���
//
//	while (!q.empty()) {
//		cur_x = q.front().first;
//		cur_y = q.front().second;
//		q.pop();
//
//		//��������
//		if ((cur_x == n - 1) && (cur_y == m - 1)) break;
//
//		for (int i = 0; i < 4; i++) {
//			//�����¿� Ž��
//			int next_x = cur_x + dir[i][0];
//			int next_y = cur_y + dir[i][1];
//
//			//�ִܰŸ� ���ϱ�
//			//next x,y�� �迭 ���ο��ְ�, check 2�����迭�� ��ϵ��� ����, map���� �̵������ϴٸ�(1)
//			if (isInside(next_x, next_y) && check[next_x][next_y] == 0 && map[next_x][next_y] == '1') {
//				check[next_x][next_y] = check[cur_x][cur_y] + 1; //���� �湮��+1= �����湮
//				q.push(pair<int, int>(next_x, next_y)); //�湮�Ѱ� push
//			}
//		}
//
//	
//	}
//	//���������� �Ÿ� ��ȯ
//	return check[n - 1][m - 1];
//
//}
//
//int main(void) {
//	cin >> n >> m;
//	//�Էºκ�
//	for (int i = 0; i < n; i++) {
//		cin >> map[i];
//	}
//
//
//	int ans = bfs();
//	cout << ans;
//
//
//}
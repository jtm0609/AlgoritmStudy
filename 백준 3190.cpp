////����: ��
////�˰���: �ùķ��̼� + Queue
////https://debuglog.tistory.com/159  �����κб����� �߸��ؼ� �ణ �����Ͽ���
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int n;//�� ũ��
//int map[100][100];
//int k; //����� ����
//int l; //ȸ���ҹ��� ����
//int head_x, head_y;
//int tail_x, tail_y;
//int dir=0; //�������
//int d[4][2] = { {0,1},{-1,0},{0,-1},{1,0} };//���ϼ���
//int cnt;//�ð�
//
//queue<pair<int, char>> rot; //������ ������ִ� ť
//queue<pair<int, int>>snake; //���� ���� ��ǥ���� ������ִ� ť
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//int main() {
//	//��ũ�� �Է�
//	cin >> n;
//	
//
//	//��� ��ǥ�Է�
//	cin >> k;
//	for (int i = 0; i < k; i++) {
//		int x, y; //����� ��ġ
//		cin >> x >> y;
//		map[x-1][y-1] = 1; //������ִ°��� 1 �� ǥ��
//	}
//	//���� �Է�
//	cin >> l;
//	for (int i = 0; i < l; i++) {
//		int X;
//		char C;
//		cin >> X >> C;
//		rot.push(pair<int, char>(X,C));
//	}
//
//
//	head_x = 0, head_y = 0, tail_x = 0, tail_y = 0;
//	map[0][0] = 2;
//
//	//���ʸ��� ���̵�
//	while (1) {
//		cnt++;
//
//		//�Ӹ��� �÷�, �Ӹ��� ����ĭ�� �̵��� ��ġ
//		head_x += d[dir][0];
//		head_y += d[dir][1];
//
//		//Ż������: ���̰ų�, ���Ǹ��� �ε����ų�
//		if (!isInside(head_x, head_y) )
//			break;
//		if (map[head_x][head_y] == 2)
//			break;
//
//		//�Ӹ��̵�
//		snake.push(pair<int, int>(head_x, head_y));
//
//		//����� ���ٸ�
//		if(map[head_x][head_y]==0)  {
//			//������ ��ġ��ĭ�� ����
//			map[tail_x][tail_y] = 0;
//			//�����̵�
//			tail_x = snake.front().first;
//			tail_y = snake.front().second;
//			snake.pop();
//		}
//		//�����ִ°��� 2��ǥ�� 
//		map[head_x][head_y] = 2;
//
//		
//		//�������� ����ȸ��
//		//���� ���� ��ȯ �ð��� ��ٸ� ȸ��
//		if (!rot.empty()) {
//			if (cnt == rot.front().first) {
//				//�ݽð� �������� ȸ��
//				if (rot.front().second == 'L') {
//					dir = ((dir + 1) % 4);
//
//				}
//				//�ð� �������� ȸ��
//				else {
//					dir = ((dir + 3) % 4);
//				}
//				rot.pop();
//			}
//		}
//
//	}
//
//
//	cout << cnt;
//
//
//}
////����: �ֻ���������
////�˰���: �ùķ��̼�
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//
//int n, m; //���� ����
//int x, y; //�ֻ��� ��ġ
//int command_count;
//int map[20][20];
//queue<int> command_q;
//int dir[5][2] = { {},{0,1},{0,-1},{-1,0},{1,0} }; //�����ϳ�
//
//struct dice {
//	//�ֻ����� ����, �Ʒ���, ���ʸ�, �����ʸ�, �ո� ,�޸�
//	int up, down, left, right, front, back; 
//};
//
////�迭���� �˻�
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//int main() {
//	struct dice dice = { 0,0,0,0 };
//
//	//�� ���� �Է�
//	cin >> n >> m >>x>>y>> command_count;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//		
//	}
//	//��ɾ� ���� �Է�
//	for(int i=0; i< command_count; i++){
//		int command;
//		cin >> command;
//		command_q.push(command);
//	}
//	
//
//	//��ɾ� �ϳ�������
//	while (!command_q.empty()) {
//		int command = command_q.front();
//		command_q.pop();
//	
//		int nx, ny;
//
//		//�ֻ��� �̵�
//		nx =x+ dir[command][0];
//		ny =y+ dir[command][1]; 
//
//		//�迭�ȿ�������
//		if (isInside(nx, ny)) {
//			x = nx;
//			y = ny;
//		}
//		//���ٸ� ���� -> continue
//		else {
//			continue;
//		}
//			
//		//�ֻ����� ����� ���� �ٲ�Ƿ� ������ �ӽ÷� ���� �����س�
//		int temp_u = dice.up;
//		int temp_d = dice.down;
//		int temp_l = dice.left;
//		int temp_r=dice.right;
//		int temp_f = dice.front;
//		int temp_b = dice.back;
//		//��
//		if (command == 1) {
//			//��->��
//			//��->��
//			//��->��
//			//��->��
//			dice.up = temp_r;
//			dice.right = temp_d;
//			dice.down = temp_l;
//			dice.left = temp_u;
//		}
//		//��
//		else if (command == 2) {
//			//��->��
//			//��->��
//			//��->��
//			//��->��
//			dice.right = temp_u;
//			dice.down = temp_r;
//			dice.left = temp_d;
//			dice.up = temp_l;
//
//		}
//		//��
//		else if (command == 3) {
//			//��->��
//			//��->��
//			//��->��
//			//��->��
//			dice.up = temp_b;
//			dice.back = temp_d;
//			dice.down = temp_f;
//			dice.front = temp_u;
//
//		}
//		//��
//		else if (command == 4) {
//			//��->��
//			//��->��
//			//��->��
//			//��->��
//			dice.up = temp_f;
//			dice.front = temp_d;
//			dice.down = temp_b;
//			dice.back = temp_u;
//
//
//		}
//		
//		//���� ���� 0�̸� �ֻ����� �Ʒ����ǰ��� �ʿ�����
//		if (map[x][y] == 0) {
//			map[x][y]=dice.down;
//		}
//		//���� ���� 0�̾ƴϸ�, ���ǰ��� �ֻ����� �Ʒ������� ���� �� ���� �� 0 �ʱ�ȭ
//		else if (map[x][y] != 0) {
//			dice.down = map[x][y];
//			map[x][y] = 0;
//		}
//
//		//�ֻ��� ���� ���
//		cout << dice.up << "\n";
//
//	}
//}
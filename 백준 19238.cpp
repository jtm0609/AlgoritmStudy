////����: ��ŸƮ �ý� ���4
////�˰���: bfs ����, �ִܰŸ�
////���� : https://na982.tistory.com/129 na982�� ���� ����ǰ
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//
//const int WALL = -1;
//const int EMPTY = -2;
//const int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//�ϵ�����
//int N, M, fuel;
//int taxi_x, taxi_y;
//int board[20][20];
//
//struct CUSTOMER{
//	int start;
//	int end;
//};
//
//struct TAXI {
//	int pos;
//	int distance;
//};
//
//CUSTOMER customer[400];
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < N) && ((b >= 0 && b < N));
//}
//
//int find_customer() {
//	queue<TAXI> q;
//	bool visited[20][20] = { false, };
//	TAXI cur = { taxi_x * 100 + taxi_y,0 };
//	visited[taxi_x][taxi_y] = true;
//	q.push(cur);
//
//	int candi_size = 0;
//	int candi[400] = { 0, };
//	int candi_distance = -1;
//
//	//�ִܰŸ� Ž��
//	while (!q.empty()) {
//		cur = q.front();
//		q.pop();
//
//		//�ִ� �Ÿ��� �մ��� ã�Ҵٸ�
//		if (candi_distance != -1 && cur.distance > candi_distance) {
//			break;
//		}
//
//		int x = cur.pos / 100;
//		int y = cur.pos % 100;
//
//		//�ִܰŸ��� �մ��� ���� �ý� ��ǥ���ִٸ�
//		if (board[x][y] >= 0) {
//			candi[candi_size++] = board[x][y];
//			candi_distance = cur.distance;
//		}
//
//		//4����Ž��
//		for (int d = 0; d < 4; d++) {
//			int nx = x + dir[d][0];
//			int ny = y + dir[d][1];
//			if (!isInside(nx, ny) || board[nx][ny] == WALL || visited[nx][ny]==true) {
//				continue;
//			}
//			visited[nx][ny] = true;
//			TAXI next = { nx * 100 + ny,cur.distance + 1 };
//			q.push(next);
//
//		}
//
//	}
//	//�ִܰŸ����� ����������ٸ� 
//	if (candi_distance > fuel) {
//		return -1;
//	}
//	int target = -1;
//	int candi_val = 10000;
//	//�ִܰŸ� �մ��� �������̶��
//	for (int i = 0; i < candi_size; i++) {
//		if (candi_val > customer[candi[i]].start) {
//			candi_val = customer[candi[i]].start;
//			target = candi[i];
//		}
//	}
//	//�ýð� ����
//	taxi_x = customer[target].start / 100;
//	taxi_y = customer[target].start % 100;
//	//�մ����¿�ĭ ��ĭ���� �ٲٱ�
//	board[taxi_x][taxi_y] = EMPTY;
//	//�ִܰŸ���ŭ ����Ҹ�
//	fuel -= candi_distance;
//	return target;
//
//}
//
//bool move_customer(int target) {
//	queue<TAXI>q;
//	bool visited[20][20] = { false, };
//	TAXI cur = { taxi_x * 100 + taxi_y,0 };
//	visited[taxi_x][taxi_y] = true;
//	q.push(cur);
//
//	while (!q.empty()) {
//		cur = q.front();
//		q.pop();
//
//		if (cur.distance > fuel) {
//			return false;
//		}
//
//		//�������� �����ߴٸ�
//		if (cur.pos == customer[target].end) {
//			taxi_x = customer[target].end / 100;
//			taxi_y = customer[target].end % 100;
//
//			//���� ����
//			fuel += cur.distance;
//			return true;
//		}
//
//		int x = cur.pos / 100;
//		int y = cur.pos % 100;
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (!isInside(nx, ny) || board[nx][ny] == WALL || visited[nx][ny] == true) {
//				continue;
//			}
//			TAXI next = { nx * 100 + ny, cur.distance + 1 };
//			q.push(next);
//			visited[nx][ny] = true;
//		}
//	}
//	//��� Ž���ҵ��� �մ��� �������� �����ϰԸ������� 122~130������ Ÿ�� ����������
//	return false;
//}
//
//
//int solve() {
//	int ret = -1;
//	for (int i = 0; i < M; i++) {
//		//�ִܰŸ� ��ã��
//		int target = find_customer();
//		//���� ã�������ٸ�
//		if (target == -1) {
//			return ret;
//		}
//		
//		//���� ���������� ����
//		bool success = move_customer(target);
//		//���������� �����ϰԸ��ߴٸ�
//		if (success == false) {
//			return ret;
//		}
//
//	}
//	ret = fuel;
//	return ret;
//
//
//}
//int main() {
//	cin >> N >> M >> fuel;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> board[i][j];
//			board[i][j] -= 2;
//		}
//	}
//
//	cin >> taxi_x >> taxi_y;
//	taxi_x--, taxi_y--;
//	for (int i = 0; i < M; i++) {
//		int sx, sy, ex, ey;
//		cin >> sx>> sy >> ex >> ey;
//		sx--, sy--, ex--, ey--;
//		customer[i].start = sx * 100 + sy;
//		customer[i].end = ex * 100 + ey;
//		board[sx][sy] = i;
//	}
//	
//	int ret=solve();
//	cout << ret;
//}
//

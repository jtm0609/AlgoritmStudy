////����: �丶�� (�ǹ�1)
////�˰���: BFS
////����: https://jaimemin.tistory.com/642
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int N, M, H; //���� ���� ����
//int map[101][101][101];
//bool visited[101][101][101];
//
//struct Dir {
//	int x, y, h;
//};
//Dir dir[6] = {
//	{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}
//}; 
//
//int noTomato;
//
//queue<Dir>q;
//bool isInside(int x, int y, int z) {
//	return (x >= 0 && x < N) && (y >= 0 && y < M) && (z >= 0 && z < H);
//}
//
//bool allRipe() {
//	int allTomato = M * N * H - noTomato; //��ü �丶�䰳��
//	int ripeTomato = 0;
//	for (int h = 0; h < H; h++)
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				if (map[i][j][h] == 1) ripeTomato++;
//
//	return allTomato == ripeTomato;
//}
//
//
//int bfs() {
//	int day = 0;
//
//	while (!q.empty()) {
//		int currentSize = q.size();
//		for (int i = 0; i < currentSize; i++) {
//			int x = q.front().x;
//			int y = q.front().y;
//			int h = q.front().h;
//			q.pop();
//
//			for (int i = 0; i < 6; i++) {
//				int nx = x + dir[i].x;
//				int ny = y + dir[i].y;
//				int nh = h + dir[i].h;
//				//���� �丶�䰡 ���� �ȿ� �ְ� 
//				if (isInside(nx, ny, nh)) {
//					//���;��� ��쿡��
//					if (map[nx][ny][nh] == 0) {
//						map[nx][ny][nh] = 1;
//						q.push({ nx,ny,nh });
//					}
//				}
//			}
//			
//			//������ �ִ� �丶�並 ���� ������ ���� �;������
//			if (q.size() == 0 && allRipe())
//				return day;
//			//������ �ִ� �丶��� ���� �������� �� ���� �丶������
//			else if (q.size() == 0 && !allRipe())
//				return -1;
//		}
//		day++;
//	}
//
//
//}
//int main() {
//	
//	cin >> M >> N >>H;
//	for (int h = 0; h < H; h++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				cin >> map[i][j][h];
//				if (map[i][j][h] == -1) { //�丶�並 ������ ����ĭ
//					noTomato++; 
//				}
//				if (map[i][j][h] == 1) //���� �丶�� ť���ֱ�
//					q.push({ i,j,h });
//			}
//		}
//	}
//
//	//����ɶ����� �丶�䰡 ����;��ִ� ����
//	if (q.size()==M*N*H-noTomato) {
//		cout << 0;
//		return 0;
//	}
//
//
//	int ret = bfs();
//	cout << ret;
//
//}
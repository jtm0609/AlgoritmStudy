////����: �Ʊ���
////�˰���: bfs(�ִܰŸ�)
////https://na982.tistory.com/101 na982���ǵ�� Ǯ����
////���̵� ������� �ڵ庸�� Ǯ���µ� ��������
//
//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//struct Shark {
//	int x, y, time;
//};
//Shark shark;
//int n;
//int map[21][21];
//int dir[4][2] = { {0,-1},{0,1},{-1,0},{1,0} };
//int sharkSize;
//int sharkAte;
//
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//void bfs() {
//	bool isupdate = true;
//	//�� ����⸦�Ծ��ٸ� while�� �ݺ�
//	while (isupdate) {
//		isupdate = false; //�� ���̸� �Ծ����� Ȯ���ϴ� ����		
//		bool visited[21][21] = { false, }; //����� �湮���� �ʱ�ȭ
//		queue <Shark> q; //�ִܰŸ��� Ž���ϱ����� ť
//		visited[shark.x][shark.y] = true;
//		q.push(shark); //���� ����� ��ġ�� push
//		
//
//
//		//�ִܰŸ��� ���ϱ����� ����ü �ʱ�ȭ(�ּڰ� �񱳸�����)
//		Shark candi;
//		candi.x = 20;
//		candi.time = -1;
//
//		//Ž��
//		while (!q.empty()) {
//			Shark cur = q.front();
//			q.pop();
//			//�ִܰŸ������� �ּڰ���
//			if (candi.time != -1 && candi.time < cur.time)
//				break;
//
//			//������ǥ�� ����Ⱑ�ְ�, ����Ⱑ ���ũ�⺸�� �۴ٸ�
//			if (map[cur.x][cur.y] < sharkSize&& map[cur.x][cur.y] != 0) {
//				//���̸��Դ´�.
//				isupdate = true;
//				//���������̳�, �����߿����� �����϶�, ����(������ ����)
//				if (candi.x>cur.x || (candi.x == cur.x && candi.y>cur.y))
//					candi = cur;
//			}
//
//			
//			for (int i = 0; i < 4; i++) {
//				Shark next;
//				next.x = cur.x + dir[i][0];
//				next.y = cur.y + dir[i][1];
//				next.time = cur.time + 1;
//				//��� �̵�
//				if (!isInside(next.x, next.y)) continue;
//				if (!visited[next.x][next.y] && map[next.x][next.y]<=sharkSize) {
//					visited[next.x][next.y] = true;
//					q.push(next);
//				}
//
//			}
//		}
//
//		//Ž���� ������
//		//���̸� �Ծ��ٸ�
//		if (isupdate) {
//			shark = candi;
//			sharkAte++;
//			//�����ũ�⸸ŭ ����⸦�Ծ��ٸ� ����� ũ������
//			if (sharkAte == sharkSize) {
//				sharkSize++;
//				sharkAte = 0;
//			}
//			//���̸��Ծ����� 0���� �ʱ�ȭ
//			map[shark.x][shark.y] = 0;
//		}
//	}
//}
//
//
//int main() {
//	cin >> n;
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 9) {
//				shark.x = i, shark.y = j, shark.time = 0;
//				sharkSize = 2, sharkAte = 0;
//				map[i][j] = 0;
//			}
//		}
//	}
//	bfs();
//	cout << shark.time;
//}
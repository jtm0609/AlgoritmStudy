////����: �� �μ��� �̵��ϱ�
////�˰���: bfs
////Ǯ��: �����հ��̵���������, ���� �����ʰ��̵��������� �����ϱ����� 3�����迭�� �̿�
////����: https://rebas.kr/658
////���� 2178(�̷�Ž��)�� ���빮��,( 2178������ �����մ°Ծƴ϶� �ܼ��� �ִܰŸ������� )
//
////����ߴ� �׽�Ʈ���̽�
///*5 6
//010000
//010110
//010110
//010111
//000110
//*/
//#include<iostream>
//#include<cstdio>
//#include<queue>
//using namespace std;
//struct c {
//	int x, y, w;
//};
//int n, m;
//int map[1001][1001];
//int dist[1001][1001][2]; //x,y��ǥ: z:���������ʰ�����, �����հ�����
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };//�ϵ�����
//queue <c> q;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//int bfs() {	
//	q.push({ 0,0,0 });
//	//ó��ĭ�� �������Ƿ� 1�� �ʱ�ȭ
//	dist[0][0][0] = 1;
//	while (!q.empty()) {
//		int x = q.front().x;
//		int y = q.front().y;
//		int w = q.front().w;
//		q.pop();
//				
//		if (x == n - 1 && y == m - 1)
//			return dist[x][y][w];
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + d[i][0];
//			int ny = y + d[i][1];
//			if (!isInside(nx,ny)) continue;
//
//			//���������̸� continue;
//			//w�� 0�̸� ���������ʰ� ��θ� �̵�������, w�� 1�̸� ���� �հ� ��θ� �̵���������
//			if (dist[nx][ny][w]) continue;
//
//			//���̾��ٸ�
//			if (map[nx][ny] == 0) {
//				dist[nx][ny][w] = dist[x][y][w] + 1;
//				q.push({ nx,ny,w });
//			}
//			//�����������̾���, �����־ �����հ�����,
//			else if (w==0 && map[nx][ny] == 1 ) {
//				dist[nx][ny][1] = dist[x][y][w] + 1;
//				q.push({ nx,ny,1 });
//			}
//		
//
//		}
//	}
//	return -1;
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//	cout<<bfs();
//
//}
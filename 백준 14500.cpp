////����: ��Ʈ�ι̳�
////�˰���: dfs+ ���Ʈ����
////https://suriisurii.tistory.com/26 ����Ǯ����
//
////DFS�� �̿��� ��쿡�� �ٸ�����϶��� ����������, �� �� �� �� 4���� ����� ��쿡�� DFS�� ���� Ž���� �Ұ����ϴ�
////���� ���� �������ش�.(other�Լ�)
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//int map[500][500];
//int visited[500][500];
////�����¿�
//int d[4][2] = { {-1,0},{1,0},{0,-1},{0,1} }; 
//int ans;
//
////�տ������� ��, ��, ��, �� 
//int dx[4][4] = { { 0,0,-1 },{ 0,-1,1 },{ 0,0,1 },{ 0,-1,1 } };
//int dy[4][3] = { { 1,2,1 },{ 1,0,0 },{ 1,2,1 },{ 1,1,1 } };
//
////�迭�˻�
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
////dfs�� Ȱ���Ͽ� �� �� �� �� 4���� ����� �����ϰ� Ž��
//void dfs(int x, int y, int count, int sum) {
//	//4������ٸ� �ִ� ��
//	if (count == 4) {
//		ans=max(ans, sum);
//		return;
//	}
//	
//	for (int i = 0; i < 4; i++) {
//		int nx = x + d[i][0];
//		int ny = y + d[i][1];
//		if (isInside(nx, ny)&& (!visited[nx][ny])) {
//	
//			visited[nx][ny] = true;
//			dfs(nx, ny, count + 1, sum+map[nx][ny]);
//			visited[nx][ny] = false;
//		}
//
//	}
//}
//
////dfs�� �Ǻ��� �� ���� ��Ʈ�ι̳�
////�� �� �� �� 4���� ���
//void other(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int total = map[x][y];
//		for (int k = 0; k < 3; k++) {
//			int nx = x + dx[i][k];
//			int ny = y + dy[i][k];
//			
//			if (isInside(nx, ny)) 
//				total += map[nx][ny];
//			//�迭�� �����̾ƴϸ� ����� Ż��
//			else
//				break;
//			
//		}
//		
//		ans = max(ans, total);
//	}
//
//
//
//}
//
//int main() {
//
//	//�Է�
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	//Ž��
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			visited[i][j] = true;
//			dfs(i, j, 1,map[i][j]);
//			other(i, j);
//			visited[i][j] = false;
//		}
//	}
//
//	cout << ans;
//
//}
////�˰���: dp
////�ִ� ����Ǽ��� 10�������̹Ƿ� dp�� Ǯ����Ѵ�.
////����Ž������ �ҽ�,  ����Ƚ���� 1��� 1�ʰ� �ɸ��� 10�ʰ��ɸ�
////�ִ���: 998!/(499!*499!)
//#include<iostream>
//using namespace std;
//
//int m, n;
//int map[501][501];
//int ans;
//int dp[501][501]; //(x,y) ������ ��, �����ϴ� ����� ����
//
//int dir[4][2] = {
//	{-1,0}, {0,1}, {1,0},{0,-1} //�ϵ�����
//};
//bool isInside(int a, int b) {
//	return (a >= 0 && a < m) && (b >= 0 && b < n);
//}
//int DFS(int x, int y) {
//	if (x == m - 1 && y == n - 1) {
//		return 1;
//	}
//	if (dp[x][y] != -1) return dp[x][y];
//
//	//dp�� ���� ���ŵǾ������ʴٸ� 0
//	dp[x][y] = 0;
//	for (int d = 0; d < 4; d++) {
//		int nx = x + dir[d][0];
//		int ny = y + dir[d][1];
//		if (!isInside(nx, ny)) continue;
//		if (map[x][y] > map[nx][ny]) {
//			//�ش� ��ǥ���� ���������� �����ִ� ��� ����
//			dp[x][y]+=DFS(nx, ny);
//			
//		}
//	}
//	return dp[x][y];
//}
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < m; i++)
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			dp[i][j] = -1;
//		}
//	
//	ans=DFS(0, 0);
//	cout << ans;
//}
//
//
//
//
//////�˰���: dfs����Ž��==>�ð��ʰ�
////#include<iostream>
////using namespace std;
////
////int m, n;
////int map[501][501];
////int ans;
////int dp[501][501]; //(x,y) ������ ��, �����ϴ� ����� ����
////bool visited[501][501];
////
////int dir[4][2] = {
////	{-1,0}, {0,1}, {1,0},{0,-1} //�ϵ�����
////};
////bool isInside(int a, int b) {
////	return (a >= 0 && a < m) && (b >= 0 && b < n);
////}
////void DFS(int x, int y) {
////	if (x == m - 1 && y == n - 1) {
////		ans++;
////		return;
////	}
////	
////	for (int d = 0; d < 4; d++) {
////		int nx = x + dir[d][0];
////		int ny = y + dir[d][1];
////		if (!isInside(nx, ny) || visited[nx][ny])
////			continue;
////		if (map[x][y] > map[nx][ny]) {
////			visited[nx][ny] = true;
////			DFS(nx, ny);
////			visited[nx][ny] = false;
////		}
////	}
////}
////int main() {
////	cin >> m >> n;
////	for (int i = 0; i < m; i++) 
////		for (int j = 0; j < n; j++) 
////			cin >> map[i][j];
////	visited[0][0] = true;
////	DFS(0,0);
////	cout << ans;
////}
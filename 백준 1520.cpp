////����: ��������
////�˰���: dfs + dp
////dp���� -1�� �ʱ�ȭ���ϰ�, 27�����ο� dp[x][y]=0���� �ʱ�ȭ�κ��� �����������ʾƼ� ��žó�������
//#include<iostream>
//using namespace std;
//
//int map[500][500];
//int n, m;
//int d[4][2] = { {-1,0}, {0,1},{1,0},{0,-1} };//�ϵ�����
//int dp[500][500];
//int cnt = 0;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//int dfs(int x, int y) {
//	//��ǥ������ �����ϸ� 1 ī��Ʈ
//	if (x == n - 1 && y == m - 1)
//		return 1;
//	
//	
//	//dp�� ���� �ִٸ� ����Ȱ� ����
//	if (dp[x][y]!=-1)
//		return dp[x][y];
//
//	//dp�� ���̾��ٸ� 0���� �ʱ�ȭ
//	dp[x][y] = 0;
//	//Ž��
//	for (int i = 0; i < 4; i++) {
//		int nx = x + d[i][0];
//		int ny = y + d[i][1];
//		if (!isInside(nx, ny)) continue;
//
//		//���������̶�� 
//		if (map[x][y] > map[nx][ny]) {
//			dp[x][y]+=dfs(nx, ny);
//			
//		}
//
//	}
//	
//	//for���� �̿��� 4���� ��Ž���� �����������ߴٸ�, ���� x,y��ǥ ����Ȱ� ����
//	return dp[x][y];
//
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			//dp�� -1�� �ʱ�ȭ
//			dp[i][j] = -1;
//		}
//	}
//
//	cout<<dfs(0,0);
//	
//
//}
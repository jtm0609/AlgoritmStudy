////����: ������� �Ǵ�
////�˰���: dfs + dp
////https://lmcoa15.tistory.com/58 �����Ͽ� Ǯ����
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int n;
//int ans;
//int map[500][500];
//int dp[500][500];
//int d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //��, ��, ��, ��
//int cnt;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//int dfs(int x, int y) {
//
//	//df�� ���� �ִٸ� �װ� ����
//	if (dp[x][y])
//		return dp[x][y];
//	//���ٸ� 1
//	dp[x][y] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + d[i][0];
//		int ny = y + d[i][1];
//		if (!isInside(nx,ny))
//			continue;
//
//		if (map[x][y] >= map[nx][ny])
//			continue;
//		
//		//dp[x][y]�� (x,y)��ǥ���� ���� �ָ� ���� �ִ� ����
//		//dfs������ �����ִٸ� 1�� �����ִ½����� Ž���Ѵ�.
//		//for���� ���⶧���� max�� ���� �ִ��� ���ؾ���
//		dp[x][y]=max(dp[x][y], dfs(nx, ny) + 1);
//		
//		
//	}
//	return dp[x][y];
//	
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			
//			ans = max(ans, dfs(i, j));
//		}
//	}
//
//	cout << ans;
//
//
//
//}
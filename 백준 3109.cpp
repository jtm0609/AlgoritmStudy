////����: ����(���2)
////��Ǯ�����Ǽ��� ���ʿ� temp�迭������ �ʿ������
////�׸����ϰ�����: ��������, ������, �����ʾƷ������� Ž���ؾ���
////����: https://jaimemin.tistory.com/1142
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int r, c;
//char map[10001][501];
//bool visited[10001][501];
////bool temp_visited[10001][501];
//int dir[3][2] = { {-1,1},{0,1},{1,1} }; //��������, ������, �����ʾƷ�
//int ans;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < r) && (b >= 0 && b < c);
//}
//
//bool dfs(int x, int y) {
//	visited[x][y] = true;
//	//���� ����
//	if (y == c - 1) {
//		return true;
//	}
//	
//	int nx, ny;
//	for(int d = 0; d < 3; d++) {
//		nx = x + dir[d][0];
//		ny = y + dir[d][1];
//		if (!isInside(nx,ny)) continue;
//		if (!visited[nx][ny] && map[nx][ny] == '.') {
//			if(dfs(nx, ny)) return true;
//		}
//	}
//
//	return false;
//
//}
//int main() {
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < r; i++) {
//		if (dfs(i, 0)) {
//			ans++;			
//		}
//		
//	}
//
//	cout << ans;
//}

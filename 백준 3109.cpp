////문제: 빵집(골드2)
////다풀어놓고실수함 애초에 temp배열을만들 필요없었음
////그리디하게접근: 오른쪽위, 오른쪽, 오른쪽아래순으로 탐색해야함
////참고: https://jaimemin.tistory.com/1142
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int r, c;
//char map[10001][501];
//bool visited[10001][501];
////bool temp_visited[10001][501];
//int dir[3][2] = { {-1,1},{0,1},{1,1} }; //오른쪽위, 오른쪽, 오른쪽아래
//int ans;
//bool isInside(int a, int b) {
//	return (a >= 0 && a < r) && (b >= 0 && b < c);
//}
//
//bool dfs(int x, int y) {
//	visited[x][y] = true;
//	//빵집 도착
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

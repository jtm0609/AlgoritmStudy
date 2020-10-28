////문제: 테트로미노
////알고리즘: dfs+ 브루트포스
////https://suriisurii.tistory.com/26 보고풀었음
//
////DFS을 이용할 경우에는 다른모양일때는 가능하지만, ㅗ ㅓ ㅏ ㅜ 4가지 모양의 경우에는 DFS를 통해 탐색이 불가능하다
////따라서 직접 구현해준다.(other함수)
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//int map[500][500];
//int visited[500][500];
////상하좌우
//int d[4][2] = { {-1,0},{1,0},{0,-1},{0,1} }; 
//int ans;
//
////앞에서부터 ㅓ, ㅜ, ㅏ, ㅗ 
//int dx[4][4] = { { 0,0,-1 },{ 0,-1,1 },{ 0,0,1 },{ 0,-1,1 } };
//int dy[4][3] = { { 1,2,1 },{ 1,0,0 },{ 1,2,1 },{ 1,1,1 } };
//
////배열검사
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
////dfs를 활용하여 ㅗ ㅓ ㅏ ㅜ 4가지 모양을 제외하고 탐색
//void dfs(int x, int y, int count, int sum) {
//	//4개가됬다면 최댓값 비교
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
////dfs로 판별할 수 없는 테트로미노
////ㅗ ㅓ ㅏ ㅜ 4가지 모양
//void other(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int total = map[x][y];
//		for (int k = 0; k < 3; k++) {
//			int nx = x + dx[i][k];
//			int ny = y + dy[i][k];
//			
//			if (isInside(nx, ny)) 
//				total += map[nx][ny];
//			//배열에 조건이아니면 그즉시 탈출
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
//	//입력
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	//탐색
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
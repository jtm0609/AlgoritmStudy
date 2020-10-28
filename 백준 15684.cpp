////문제: 사다리 조작
////알고리즘: 브루트포스+ dfs
//
//#include<iostream>
//using namespace std;
//
//int n, m, h;
//int map[30][10];
//int ans = 4;
//
////문제에서 충족하는 사다리 조건이 맞는지 확인하는 함수
//bool ladder() {
//	//세로열을 기준
//	for (int j = 0; j < n; j++) {
//		int k = j;
//		for (int i = 0; i < h; i++) {
//			//오른쪽이 사다리가 연결되어있다면
//			if (map[i][k])
//				k += 1;
//
//			//왼쪽이 사다리가 연결되어있다면
//			else if (k > 0 && map[i][k - 1])
//				k -= 1;
//		}
//		if (j != k)
//			return false;
//	}
//	//모두 j->j면 true리턴
//	return true;
//
//}
//
//void dfs(int cnt, int x, int y) {
//	//현재 가장작게추가해서 사다리조작이 성공한경우케이스보다 크거나같은경우는 탈출
//	if (ans <= cnt)
//		return;
//	//사다리를탄 모든세로열이 자기자신이 되었다면 최솟값 갱신
//	if (ladder()) {
//		if (ans > cnt) {
//			ans = cnt;
//			return;
//		}
//	}
//
//	if (cnt == 3)
//		return;
//
//	//가로줄을 추가할 모든경우의수 찾아본다
//	for (int i = x; i < h; i++, y = 0) {
//		for (int j = y; j < n - 1; j++) {
//			//사다리가 연결되어있다면, 세로열을 2번건너뛴다(연속적으로 가로열이존재하면안되므로)
//			if (map[i][j])
//				j += 1;
//			//사다리가 연결되어있지않다면 연결하고, 세로열을 2번 건너뛰고 백트래킹한다.
//			else {
//				map[i][j] = 1;
//				dfs(cnt + 1, i, j + 2);
//				map[i][j] = 0;
//			}
//
//
//		}
//	}
//
//
//}
//
//int main() {
//	cin >> n >> m >> h;
//	//사다리 연결정보 입력
//	for (int i = 0; i < m; i++) {
//		int l1, l2;
//		cin >> l1 >> l2;
//		map[l1 - 1][l2 - 1] = 1;
//
//	}
//	dfs(0, 0, 0);
//	if (ans < 4)
//		cout << ans;
//	else
//		cout << -1;
//
//}
//
//

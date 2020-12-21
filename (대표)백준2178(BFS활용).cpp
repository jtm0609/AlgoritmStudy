////https://blockdmask.tistory.com/182 참고해서 풀었음
////미로탐색 최단거리
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int n, m;//행과열
//string map[100]; //갈수있는지 없는지
//int check[100][100]; //지나온길 기록
//int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} }; //상하좌우
//
//
////배열의 조건에 충족하는지검사
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//
//int bfs() {
//	int cur_x = 0, cur_y = 0;
//
//	queue<pair<int, int>> q;
//	q.push(pair<int, int>(cur_x, cur_y));
//	check[cur_x][cur_y] = 1; //bfs가 지나가면서 몇번째만에 그 점에 접근했는지
//
//	while (!q.empty()) {
//		cur_x = q.front().first;
//		cur_y = q.front().second;
//		q.pop();
//
//		//도착지점
//		if ((cur_x == n - 1) && (cur_y == m - 1)) break;
//
//		for (int i = 0; i < 4; i++) {
//			//상하좌우 탐색
//			int next_x = cur_x + dir[i][0];
//			int next_y = cur_y + dir[i][1];
//
//			//최단거리 구하기
//			//next x,y가 배열 내부에있고, check 2차원배열에 기록된적 없고, map에서 이동가능하다면(1)
//			if (isInside(next_x, next_y) && check[next_x][next_y] == 0 && map[next_x][next_y] == '1') {
//				check[next_x][next_y] = check[cur_x][cur_y] + 1; //이전 방문값+1= 다음방문
//				q.push(pair<int, int>(next_x, next_y)); //방문한곳 push
//			}
//		}
//
//	
//	}
//	//도착지점의 거리 반환
//	return check[n - 1][m - 1];
//
//}
//
//int main(void) {
//	cin >> n >> m;
//	//입력부분
//	for (int i = 0; i < n; i++) {
//		cin >> map[i];
//	}
//
//
//	int ans = bfs();
//	cout << ans;
//
//
//}
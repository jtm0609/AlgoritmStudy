////문제: 인구이동 LV골드5
////알고리즘: 구현, dfs
////풀이: 벽을허물기->인구이동구하기
//
//#include<iostream>
//#include<cstring>
//#include<vector>
//using namespace std;
//int N, L, R;
//int map[100][100];
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //북동남서
//bool visit[100][100];
//int union_count;
//int union_people_count;
//vector<pair<int, int>>cand;
//
//int answer;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < N) && (b >= 0 && b < N);
//}
//void dfs(int x, int y) {
//	visit[x][y] = true;
//
//	//바뀔인덱스 저장
//	cand.push_back(make_pair(x, y));
//
//	union_count++;
//	union_people_count += map[x][y];
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (!isInside(nx,ny)) continue;
//		if (visit[nx][ny]) continue;
//
//		int dif = abs(map[nx][ny] - map[x][y]);
//		//차이가 L,R사이에있다면
//		if (dif >= L && dif <= R) {
//			dfs(nx, ny);
//		}			
//	}
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> L >> R;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	while (1) {
//
//		bool exit_flag = true;
//		memset(visit, false, sizeof(visit));
//
//		//while문 탈출조건 flag
//		bool moved = false;
//
//		//탐색
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (!visit[i][j]) {
//								
//					union_count = 0;
//					union_people_count = 0;
//					cand.clear();
//					dfs(i, j);
//				
//					int people = union_people_count / union_count;
//					
//					if (union_count > 1) {
//						exit_flag = false;
//						moved = true;
//						int tmp = 0;
//						for (int i = 0; i < cand.size(); i++)
//							map[cand[i].first][cand[i].second] = people;
//					}
//				}
//			}
//		}
//		//이동했다면 
//		if (moved)
//			answer++;
//		//이동안했다면 while문 탈출
//		if(exit_flag)
//		break;
//	}
//
//	cout << answer;
//}
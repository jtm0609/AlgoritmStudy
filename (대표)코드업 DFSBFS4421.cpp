//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
////함수선언
//void dfs(int r, int c);
//void bfs(int r, int c);
//
////맵
//vector<int> map[200];
//
////맵의 방문여부
//bool visited[200][200];
////vector<vector<int>> map(200,(200,0);  v[0][0] ~ v[200][200] 까지 전부 0으로 초기화
//
////dfs에서 상,하,좌,우 이동
//int pos[4][4] = { {-1,0},{1,0},{0,-1} ,{0,1} };
//
////맵의크기
//int mapSize;
//
////단지개수
//int apart_count=0;
//
////단지내 개수
//int room = 0;
//vector<int> room_count;
//int main() {
//	
//	cin >> mapSize;
//
//	for (int i = 0; i < mapSize; i++) {
//		for (int j = 0; j < mapSize; j++) {
//			int a;
//			scanf("%1d",&a); //%1d로 이어붙여서 입력받을수있음
//			map[i].push_back(a);
//		}
//	}
//
//
//
//	
//	for (int i = 0; i < mapSize; i++) {
//		for (int j = 0; j < mapSize; j++) {
//			//집이있고,  방문을하지않았다면 dfs함수를 호출
//			if (map[i][j] == 1 && !visited[i][j]) {
//				room = 0;
//				apart_count++;
//				bfs(i, j);
//				
//				room_count.push_back(room);
//			}
//		}
//	}
//	//단지개수 출력
//	cout << apart_count << endl;;
//	sort(room_count.begin(), room_count.end());
//	for (int i = 0; i<room_count.size(); i++) {
//		cout << room_count[i] << "\n";
//	}
//}
//
////dfs방법
////각단지의 개수를 세는역할을함
//void dfs(int r, int c) {
//	room++;
//	visited[r][c] = true;
//
//	//상, 하, 좌, 우 탐색
//	for (int i = 0; i < 4; i++) {
//		int nr = r + pos[i][0]; //새로운 행
//		int nc = c + pos[i][1]; //새로운 열;
//
//		// 1. 배열의 조건을 만족하는지
//		// 2. 단지가 연결이 되었는지
//		// 3. 방문을 하지않는곳이 있을때
//		if (nr >= 0 && nr < mapSize && nc >= 0 && nc < mapSize &&
//			map[nr][nc] == 1 &&
//			!visited[nr][nc]) {
//			dfs(nr, nc);
//		}
//	}
//}
//
////bfs방법
//void bfs(int r, int c) {
//	queue<pair<int, int>>q;
//	q.push({ r,c });
//	room++;
//	visited[r][c] = true;
//
//	while (!q.empty()) {
//		r = q.front().first;
//		c = q.front().second;
//
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nr = r + pos[i][0];
//			int nc = c + pos[i][1];
//
//			if (nr >= 0 && nr < mapSize && nc >= 0 && nc < mapSize &&
//				map[nr][nc] == 1 &&
//				!visited[nr][nc]) {
//				q.push({ nr,nc });
//				room++;
//				visited[nr][nc] = true;
//			}
//		}
//	}
//
//}
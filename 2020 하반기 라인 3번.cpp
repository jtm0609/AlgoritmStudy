////런타임에러
//#include <string>
//#include <vector>
//#include<iostream>
//
//using namespace std;
//int time = 0;
//int pos[4][2] = { {-1,0},{1,0},{0,-1} ,{0,1} }; //상, 하, 좌, 우
//int direction[1][2] = { {1,0} }; //현재 바라보고있는 방향
//bool visited[100][100];  //방문했는지
//int mapSize; //맵크기
//
//void dfs(vector<vector<int>>& maze, int r, int c, int direction_r, int direction_c) {
//	
//	direction[0][0] = direction_r;
//	direction[0][1] = direction_c;
//
//	
//	//왼쪽위치
//	int left_r;//새로운 행
//	int left_c; //새로운 열
//
//	//방향이 아래쪽이라면
//	if (direction[0][0] == pos[1][0] && direction[0][1]==pos[1][1]) {
//		left_r = pos[3][0];
//		left_c = pos[3][1];
//	}
//
//	//방향이 위쪽이라면
//	else if (direction[0][0] == pos[0][0] && direction[0][1]==pos[0][1]) {
//		left_r = pos[2][0];
//		left_c = pos[2][1];
//
//	}
//
//	//방향이 오른쪽이라면
//	else if (direction[0][0] == pos[3][0] && direction[0][1]==pos[3][1]) {
//		left_r = pos[0][0];
//		left_c = pos[0][1];
//
//	}
//
//	//방향이 왼쪽이라면
//	else if (direction[0][0] == pos[2][0] && direction[0][1]==pos[2][1]) {
//		left_r = pos[1][0];
//		left_c = pos[1][1];
//
//	}
//
//	//현재 바라보고있는 방향의 왼쪽으로 이동할 다음 칸의 행과열
//	int nr = r + left_r;
//	int nc = c + left_c;
//
//	//벽이거나 배열의 조건에 어긋나면 이동을못하므로, 다시 방향설정
//	//방향바꾸기
//	if ((nr < 0) || (nc < 0) || (nr >= mapSize) || (nc >= mapSize)) {
//			dfs(maze, r, c, left_r, left_c);
//			return;
//		
//	}
//
//
//	//그렇지않다면 이동
//	else {
//		if (maze[nr][nc] == 0) {
//			if (!visited[nr][nc])
//				time++;
//
//			visited[nr][nc] = true;
//			//이동한위치가 최종도착지점 (mapsize-1, mapsize-1)위치에 도착하면 종료
//			if (nr == mapSize - 1 && nc == mapSize - 1) {
//				cout << "sd";
//				return;
//			}
//
//			dfs(maze, nr, nc, left_r, left_c);
//		}
//
//		//벽이면 이동못하므로 다시 방향설정
//		else if (maze[nr][nc] == 1) {
//			dfs(maze, r, c, left_r, left_c);
//			
//		}
//		
//	}
//	
//	 
//
//}
//
//int solution(vector<vector<int>> maze) {
//	mapSize = maze.size();
//	
//	//처음 0,0에서 시작
//	visited[0][0] = true;
//	time++;
//
//	//아래방향
//	int nr = 0 + pos[1][0];
//	int nc = 0 + pos[1][1];
//	dfs(maze, nr, nc, 1, 0);
//	return time;
//}
//
//int main() {
//	//테스트케이스
//	vector<vector<int>>maze{ {0, 1, 0, 1} ,{0, 1, 0, 0},{0, 0, 0, 0},{1, 0, 1, 0} };
//	int result=solution(maze);
//	cout << result;
//
//	/*maze	result
//		[[0, 1, 0, 1], [0, 1, 0, 0], [0, 0, 0, 0], [1, 0, 1, 0]] 10
//		[[0, 1, 0, 0, 0, 0], [0, 1, 0, 1, 1, 0], [0, 1, 0, 0, 1, 0], [0, 1, 1, 1, 1, 0], [0, 1, 0, 0, 0, 0], [0, 0, 0, 1, 1, 0]] 32
//		[[0, 1, 0, 0, 0, 0], [0, 0, 1, 0, 0, 0], [0, 0, 0, 1, 0, 0], [0, 0, 0, 0, 1, 0], [0, 0, 0, 0, 0, 0], [1, 1, 1, 1, 1, 0]] 24*/
//	
//}
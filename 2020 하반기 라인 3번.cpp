////��Ÿ�ӿ���
//#include <string>
//#include <vector>
//#include<iostream>
//
//using namespace std;
//int time = 0;
//int pos[4][2] = { {-1,0},{1,0},{0,-1} ,{0,1} }; //��, ��, ��, ��
//int direction[1][2] = { {1,0} }; //���� �ٶ󺸰��ִ� ����
//bool visited[100][100];  //�湮�ߴ���
//int mapSize; //��ũ��
//
//void dfs(vector<vector<int>>& maze, int r, int c, int direction_r, int direction_c) {
//	
//	direction[0][0] = direction_r;
//	direction[0][1] = direction_c;
//
//	
//	//������ġ
//	int left_r;//���ο� ��
//	int left_c; //���ο� ��
//
//	//������ �Ʒ����̶��
//	if (direction[0][0] == pos[1][0] && direction[0][1]==pos[1][1]) {
//		left_r = pos[3][0];
//		left_c = pos[3][1];
//	}
//
//	//������ �����̶��
//	else if (direction[0][0] == pos[0][0] && direction[0][1]==pos[0][1]) {
//		left_r = pos[2][0];
//		left_c = pos[2][1];
//
//	}
//
//	//������ �������̶��
//	else if (direction[0][0] == pos[3][0] && direction[0][1]==pos[3][1]) {
//		left_r = pos[0][0];
//		left_c = pos[0][1];
//
//	}
//
//	//������ �����̶��
//	else if (direction[0][0] == pos[2][0] && direction[0][1]==pos[2][1]) {
//		left_r = pos[1][0];
//		left_c = pos[1][1];
//
//	}
//
//	//���� �ٶ󺸰��ִ� ������ �������� �̵��� ���� ĭ�� �����
//	int nr = r + left_r;
//	int nc = c + left_c;
//
//	//���̰ų� �迭�� ���ǿ� ��߳��� �̵������ϹǷ�, �ٽ� ���⼳��
//	//����ٲٱ�
//	if ((nr < 0) || (nc < 0) || (nr >= mapSize) || (nc >= mapSize)) {
//			dfs(maze, r, c, left_r, left_c);
//			return;
//		
//	}
//
//
//	//�׷����ʴٸ� �̵�
//	else {
//		if (maze[nr][nc] == 0) {
//			if (!visited[nr][nc])
//				time++;
//
//			visited[nr][nc] = true;
//			//�̵�����ġ�� ������������ (mapsize-1, mapsize-1)��ġ�� �����ϸ� ����
//			if (nr == mapSize - 1 && nc == mapSize - 1) {
//				cout << "sd";
//				return;
//			}
//
//			dfs(maze, nr, nc, left_r, left_c);
//		}
//
//		//���̸� �̵����ϹǷ� �ٽ� ���⼳��
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
//	//ó�� 0,0���� ����
//	visited[0][0] = true;
//	time++;
//
//	//�Ʒ�����
//	int nr = 0 + pos[1][0];
//	int nc = 0 + pos[1][1];
//	dfs(maze, nr, nc, 1, 0);
//	return time;
//}
//
//int main() {
//	//�׽�Ʈ���̽�
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
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
////�Լ�����
//void dfs(int r, int c);
//void bfs(int r, int c);
//
////��
//vector<int> map[200];
//
////���� �湮����
//bool visited[200][200];
////vector<vector<int>> map(200,(200,0);  v[0][0] ~ v[200][200] ���� ���� 0���� �ʱ�ȭ
//
////dfs���� ��,��,��,�� �̵�
//int pos[4][4] = { {-1,0},{1,0},{0,-1} ,{0,1} };
//
////����ũ��
//int mapSize;
//
////��������
//int apart_count=0;
//
////������ ����
//int room = 0;
//vector<int> room_count;
//int main() {
//	
//	cin >> mapSize;
//
//	for (int i = 0; i < mapSize; i++) {
//		for (int j = 0; j < mapSize; j++) {
//			int a;
//			scanf("%1d",&a); //%1d�� �̾�ٿ��� �Է¹���������
//			map[i].push_back(a);
//		}
//	}
//
//
//
//	
//	for (int i = 0; i < mapSize; i++) {
//		for (int j = 0; j < mapSize; j++) {
//			//�����ְ�,  �湮�������ʾҴٸ� dfs�Լ��� ȣ��
//			if (map[i][j] == 1 && !visited[i][j]) {
//				room = 0;
//				apart_count++;
//				bfs(i, j);
//				
//				room_count.push_back(room);
//			}
//		}
//	}
//	//�������� ���
//	cout << apart_count << endl;;
//	sort(room_count.begin(), room_count.end());
//	for (int i = 0; i<room_count.size(); i++) {
//		cout << room_count[i] << "\n";
//	}
//}
//
////dfs���
////�������� ������ ���¿�������
//void dfs(int r, int c) {
//	room++;
//	visited[r][c] = true;
//
//	//��, ��, ��, �� Ž��
//	for (int i = 0; i < 4; i++) {
//		int nr = r + pos[i][0]; //���ο� ��
//		int nc = c + pos[i][1]; //���ο� ��;
//
//		// 1. �迭�� ������ �����ϴ���
//		// 2. ������ ������ �Ǿ�����
//		// 3. �湮�� �����ʴ°��� ������
//		if (nr >= 0 && nr < mapSize && nc >= 0 && nc < mapSize &&
//			map[nr][nc] == 1 &&
//			!visited[nr][nc]) {
//			dfs(nr, nc);
//		}
//	}
//}
//
////bfs���
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
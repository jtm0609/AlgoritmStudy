//#include <vector>
//#include<algorithm>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //�ϵ�����
//bool visited[101][101];
//int area; //����
//int maxCnt; //����ū����
//int m, n;
//int tempCnt;
//vector<vector<int>> pictures;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < m) && (b >= 0 && b < n);
//}
//
////dfs�� ������ ã���鼭, �׿����� ũ�⸦ ���Ѵ�.
//void dfs(int i, int j) {
//	visited[i][j] = true;
//	tempCnt++;
//	for (int d = 0; d < 4; d++) {
//		int newX = i + dir[d][0]; int newY = j + dir[d][1];
//		if (!isInside(newX, newY)) continue;
//		if (visited[newX][newY]) continue;
//		if (pictures[i][j] != pictures[newX][newY]) continue;
//		dfs(newX, newY);
//	}
//}
//
//
//vector<int> solution(int mm, int nn, vector<vector<int>> picture) {
//	//���������� �ʱ�ȭ�������ָ� ��������(�̹����� �׷��Ͱ���)
//	area = 0; maxCnt = 0; m = 0; n = 0; tempCnt = 0; memset(visited, false, sizeof(visited));
//
//	vector<int>answer_v;
//	pictures = picture;
//	m = mm; n = nn;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			//���� 0�̾ƴϰ� �湮�� ���ߴٸ� dfs 
//			if (pictures[i][j] != 0 && !visited[i][j]) {
//				dfs(i, j);
//				//dfs�α��� ������ũ��� �ִ��� ���Ѵ�.
//				maxCnt = max(maxCnt, tempCnt);
//				//��������
//				area++;
//				//��Ʈ��ŷ
//				tempCnt = 0;
//			}
//		}
//	}
//	answer_v.push_back(area); answer_v.push_back(maxCnt);
//	return answer_v;
//}
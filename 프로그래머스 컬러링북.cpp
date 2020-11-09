//#include <vector>
//#include<algorithm>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} }; //북동남서
//bool visited[101][101];
//int area; //영역
//int maxCnt; //가장큰넓이
//int m, n;
//int tempCnt;
//vector<vector<int>> pictures;
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < m) && (b >= 0 && b < n);
//}
//
////dfs로 영역을 찾으면서, 그영역의 크기를 구한다.
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
//	//전역변수를 초기화를안해주면 에러가남(이문제만 그런것같음)
//	area = 0; maxCnt = 0; m = 0; n = 0; tempCnt = 0; memset(visited, false, sizeof(visited));
//
//	vector<int>answer_v;
//	pictures = picture;
//	m = mm; n = nn;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			//값이 0이아니고 방문을 안했다면 dfs 
//			if (pictures[i][j] != 0 && !visited[i][j]) {
//				dfs(i, j);
//				//dfs로구한 영역의크기와 최댓값을 비교한다.
//				maxCnt = max(maxCnt, tempCnt);
//				//영역증가
//				area++;
//				//백트래킹
//				tempCnt = 0;
//			}
//		}
//	}
//	answer_v.push_back(area); answer_v.push_back(maxCnt);
//	return answer_v;
//}
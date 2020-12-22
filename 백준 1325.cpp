////문제: 효율적인 해킹
////알고리즘: 그래프+ DFS
//
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//vector<int> graph[10000+1];
//bool visited[10000 + 1];
//int cnt;
//
//void DFS(int node) {
//	visited[node] = true;
//	for (int i = 0; i < graph[node].size(); i++) {
//		int next = graph[node][i];
//		if (!visited[next]) {
//			cnt++;
//			DFS(next);
//		}
//	}
//
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int node1, node2;
//		cin >> node1 >> node2;
//		//2번째 컴퓨터를 통해 첫 번째 컴퓨터를 해킹할 수 있음
//		graph[node2].push_back(node1);
//	}
//
//	int maxCnt = 0;
//	vector<int> ret;
//	for (int i = 1; i <= n; i++) {
//		//초기화 부분
//		memset(visited, false, sizeof(visited));
//		cnt = 0;
//
//		DFS(i);
//
//		//최댓값을 가진 노드가 여러개있다면
//		if (maxCnt == cnt)  ret.push_back(i);
//		
//		//최댓값 갱신
//		if (maxCnt < cnt) {
//			maxCnt = cnt;
//			ret.clear();
//			ret.push_back(i);
//		}
//		
//	}
//	sort(ret.begin(), ret.end());
//	for (int i = 0; i < ret.size(); i++) {
//		cout << ret[i] << " ";
//	}
//	cout << endl;
//}

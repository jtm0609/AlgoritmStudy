////����: ȿ������ ��ŷ
////�˰���: �׷���+ DFS
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
//		//2��° ��ǻ�͸� ���� ù ��° ��ǻ�͸� ��ŷ�� �� ����
//		graph[node2].push_back(node1);
//	}
//
//	int maxCnt = 0;
//	vector<int> ret;
//	for (int i = 1; i <= n; i++) {
//		//�ʱ�ȭ �κ�
//		memset(visited, false, sizeof(visited));
//		cnt = 0;
//
//		DFS(i);
//
//		//�ִ��� ���� ��尡 �������ִٸ�
//		if (maxCnt == cnt)  ret.push_back(i);
//		
//		//�ִ� ����
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

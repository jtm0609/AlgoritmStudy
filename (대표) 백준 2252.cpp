////����: �ټ���� (���2)
////�˰���: ��������
////�н��ѳ�¥: 2020-12-25
////Ǯ���ʾҰ� ���� Ǯ�̺��� �������ľ˰��� �������� ��������
//
//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//#define MAX 32001
//int indegree[MAX];
//vector<int> v[MAX];
//
//int main() {
//	int n, m, a, b;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		indegree[b]++;
//		v[a].push_back(b);
//	}
//
//	queue<int> now;
//	for (int i = 1; i <= n; i++) 
//		if (indegree[i] == 0) now.push(i);
//
//	while (!now.empty()) {
//		int i = now.front();
//		now.pop();
//		cout << i << " ";
//
//		for (int j = 0; j < v[i].size(); j++)
//			if (--indegree[v[i][j]] == 0)
//				now.push(v[i][j]);
//	}
//	
//}

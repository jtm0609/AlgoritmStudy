////����: Ʈ�������� (��� 4)
////�˰���: Ʈ��+dfs
////����� Ʈ�� dfs����

//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//
//const int MAX = 10000 + 1;
//int n;
//bool visited[MAX]; //�湮����
////int grapth[MAX][MAX]=>���������� �޸��ʰ�
//vector<pair<int, int>> grapth[MAX]; //�޸𸮸� ���� ���ִ�.
//
//int diameter = 0; //����
//int farthestNode = 0; //���� �ָ��ִ� ���
//
//void dfs(int node, int distance) {
//
//	if (visited[node]) {
//		return;
//	}
//	visited[node] = true;
//	//���� ������Ʈ
//	if (diameter < distance) {
//		diameter = distance;
//		farthestNode = node;
//	}
//	//Ž��
//	for (int i = 0; i < grapth[node].size(); i++) {
//		dfs(grapth[node][i].first, distance+grapth[node][i].second);
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		int node1, node2, cost;
//		cin >> node1 >> node2 >> cost;
//
//		//������ Ǯ������ ��������� ����
//		grapth[node1].push_back(make_pair(node2, cost));
//		grapth[node2].push_back(make_pair(node1, cost));
//	}
//	memset(visited, false, sizeof(visited));
//
//	//��Ʈ���� �Ÿ��� ���� �� ��带 ã�´�.
//	dfs(1, 0);
//
//	memset(visited, false, sizeof(visited));
//	diameter = 0;
//	//����� ��带 ã������
//	//�ش� �������� ���� �Ÿ��� �� ��带 ã�� ������ ����Ѵ�.
//	dfs(farthestNode, 0);
//
//	cout << diameter;
//}

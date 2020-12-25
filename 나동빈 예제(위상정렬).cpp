////�������� ����
////�н��ѳ�¥: 2020-12-25
//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 10
//using namespace std;
//
//int n, inDegree[MAX];
//vector<int> a[MAX];
//
//void topologySort() {
//	int result[MAX]; //�������ĵ� �迭
//	queue<int> q;
//
//	//���� ������ 0�� ��带 ť�� ����
//	for (int i = 1; i <= n; i++) {
//		if (inDegree[i] == 0) q.push(i);
//	}
//
//	//������ ������ ����Ƿ��� ��Ȯ�� n���� ��带 �湮
//	for (int i = 1; i <= n; i++) {
//		//n���� �湮�ϱ� ���� ť�� �������� ����Ŭ�� �߻��� �� -> �������ĸ���
//		if (q.empty()) {
//			cout << "����Ŭ�� �߻��߽��ϴ�." << "\n";
//			return;
//		}
//		int x = q.front();
//		q.pop();
//		result[i] = x;
//		for (int i = 0; i < a[x].size(); i++) {
//			int next = a[x][i];
//			//���Ӱ� ���������� 0�� �� ������ ť�� ����(-���ִ������� �����������ǹ���)
//			if (--inDegree[next] == 0)
//				q.push(next);
//		}
//	}
//
//	//���
//	for (int i = 1; i <= n; i++) {
//		cout << result[i] << " ";
//	}
//}
//
//int main() {
//	n = 7;
//	a[1].push_back(2);
//	inDegree[2]++;
//	a[1].push_back(5);
//	inDegree[5]++;
//	a[2].push_back(3);
//	inDegree[3]++;
//	a[3].push_back(4);
//	inDegree[4]++;
//	a[4].push_back(6);
//	inDegree[6]++;
//	a[5].push_back(6);
//	inDegree[6]++;
//	a[6].push_back(7);
//	inDegree[7]++;
//	topologySort();
//}
////����: Ư���� �ִܰ��(���4)
////�˰���: ���ͽ�Ʈ�� 
////���ͽ�Ʈ�� ���빮����
////����: https://jaimemin.tistory.com/1004 
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//const int INF = 987654321;
//int n, e;
//vector<pair<int, int>> a[801];
//
////�ִܰŸ� ã��
//vector<int> dijstra(int start, int end) {
//	vector<int> d(end,INF);
//	priority_queue<pair<int, int>> pq; //�Ÿ�, ����
//	d[start] = 0;
//	pq.push(make_pair(0, start));
//	while (!pq.empty()) {
//		int current = pq.top().second;
//		int distance = pq.top().first;
//		pq.pop();
//		if (d[current] < distance) continue;
//
//		for (int i = 0; i < a[current].size(); i++) {
//			int next = a[current][i].first;
//			int nextDistance = distance+a[current][i].second;
//			if (d[next] > nextDistance) {
//				d[next] = nextDistance;
//				pq.push(make_pair(nextDistance, next));
//			}
//		}	
//	}
//	return d;
//
//}
//int main() {
//	cin >> n >> e;
//	for (int i = 0; i < e; i++) {
//		int to, from, w;
//		cin >> to >> from >> w;
//		//�����
//		a[to].push_back(make_pair(from, w));
//		a[from].push_back(make_pair(to, w));
//	}
//	int node1, node2;
//	cin >> node1 >> node2;
//	vector<int> ret = dijstra(1, n+1);
//	vector<int> temp1 = dijstra(node1, n+1);
//	vector<int> temp2 = dijstra(node2, n+1);
//
//	//�ΰ��� ������ ������ �ִܰ��
//	//1->node1 -> node2-> n
//	//1->node2 -> node1-> n
//	int ans = min(ret[node1] + temp1[node2] + temp2[n], ret[node2] + temp2[node1] + temp1[n]);
//	if (ans >= INF || ans < 0)
//		cout << -1 << "\n";
//	else
//		cout << ans;
//
//}
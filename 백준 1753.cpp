////문제: 최단경로
////알고리즘: 다익스트라 
////<다익스트라 기본문제>
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//const int INF = 987654321;
//int v, e;
//int start;
//vector<pair<int, int>> a[20000+1];
//priority_queue <pair<int,int>> pq;
//int d[20000 + 1];
//
//void dijstra(int start) {
//	d[start] = 0;
//	pq.push(make_pair(0, start)); //거리, 정점
//	while (!pq.empty()) {
//		int current = pq.top().second;
//		int distance = -pq.top().first;
//		pq.pop();
//		if (distance > d[current]) continue;
//
//		for (int i = 0; i < a[current].size(); i++) {
//			int next = a[current][i].second;
//			int nextDistance = distance + a[current][i].first;
//			if (nextDistance<d[next]) {
//				d[next] = nextDistance;
//				pq.push(make_pair(-nextDistance, next));
//			}
//		}
//	}
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> v >> e;
//	cin >> start;
//
//	for (int i = 1; i <= v; i++) {
//		d[i] = INF;
//	}
//	for (int i = 0; i < e; i++) {
//		int from, to, w;
//		cin >> from >> to >> w;
//		a[from].push_back(make_pair(w, to));
//	}
//
//	dijstra(start);
//	for (int i = 1; i <= v; i++) {
//		if (d[i] == INF) {
//			cout << "INF" << "\n";
//			continue;
//		}
//		cout << d[i] << "\n";
//	}
//}
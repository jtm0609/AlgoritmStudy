
////와일문이 반복되는 횟수= pq.pop()횟수
////pq.push 횟수= for문이 반복되는 총횟수
////pq.pop횟수 = pq.push 횟수
//// for문이 반복되는횟수= while문이 반복되는 횟수 =K번
//// 따라서 시간복잡도 O(logN)
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int number = 6;
//int INF = 10000000; //무한대
//vector<pair<int, int>>a[7]; //간선정보
//int d[7]; //최단거리
//
//void dijkstra(int start) {
//	d[start] = 0;
//
//	//정점과 가중치
//	priority_queue<pair<int, int>>pq; //우선순위큐(거리,정점)
//	pq.push(make_pair(0, start)); 
//	while (!pq.empty()) {
//		int current = pq.top().second;
//		//작은값이 우선순위큐에서 맨위에있도록 음수화합니다.
//		int distance = -pq.top().first;
//		pq.pop();
//
//		//최단거리가 아닌경우 스킵
//		if (d[current] < distance) continue;
//		
//		for (int i = 0; i < a[current].size(); i++) {
//			//선택된 노드의 인접 노드
//			int next = a[current][i].second;
//			//선택된 노드의 인접노드로 거쳐서 가는 거리
//			int nextDistance = distance + a[current][i].first;
//
//			//기존의 최소거리보다 더 작다면 교체
//			if (nextDistance < d[next]) {
//				d[next] = nextDistance;
//				pq.push(make_pair(- nextDistance,next));
//
//
//			}
//		}
//
//
//	}
//}
//
//int main(void) {
//	//처음에 최단거리 배열을 무제한으로 초기화
//	for (int i = 1; i <= number; i++) {
//		d[i] = INF;
//	}
//	a[1].push_back(make_pair(2, 2));
//	a[1].push_back(make_pair(5, 3));
//	a[1].push_back(make_pair(1, 4));
//
//	a[2].push_back(make_pair(2, 1));
//	a[2].push_back(make_pair(3, 3));
//	a[2].push_back(make_pair(2, 4));
//
//	a[3].push_back(make_pair(5, 1));
//	a[3].push_back(make_pair(3, 2));
//	a[3].push_back(make_pair(3, 4));
//	a[3].push_back(make_pair(1, 5));
//	a[3].push_back(make_pair(5, 6));
//
//	a[4].push_back(make_pair(1, 1));
//	a[4].push_back(make_pair(2, 2));
//	a[4].push_back(make_pair(3, 3));
//	a[4].push_back(make_pair(1, 5));
//
//	a[5].push_back(make_pair(1, 3));
//	a[5].push_back(make_pair(1, 4));
//	a[5].push_back(make_pair(2, 6));
//
//	a[6].push_back(make_pair(5, 3));
//	a[6].push_back(make_pair(2, 5));
//	dijkstra(1);
//
//	//결과 출력
//	for (int i = 1; i <= number; i++) {
//		cout << d[i] << " ";
//	}
//}

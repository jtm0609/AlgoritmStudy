////문제: 컵라면 (골드1)
////알고리즘: 그리디, 우선순위큐
////참조: https://jaimemin.tistory.com/1326
////문제를 잘못이해했고, 구현방식도 틀렸었음
////데드라인이 큰것부터 우선순위큐를 통해 컵라면개수가 큰것을 담음
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//int n; //O(10^5)
//
//priority_queue<int> pq; //컵라면개수
//
//int main() {
//	cin >> n;
//	vector<pair<int, int>> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i].first >> v[i].second;
//		--v[i].first;
//	}
//	//데드라인이 큰순으로 정렬
//	sort(v.begin(), v.end(),greater<pair<int,int>>());
//		
//	int result = 0;
//	int idx = 0;
//	//데드라인이 높은순서
//	//(데드라인이 낮은순서부터 탐색하면, 데드라인이 가장큰 컵라면개수가있음에도 불구하고 못가져가는수가있음)
//	for (int i = n-1; i >=0; i--) {
//		for (; idx < n && v[idx].first == i; idx++) {
//			pq.push(v[idx].second);
//		}
//		//max heap
//		if (!pq.empty()) {
//			result += pq.top();
//			pq.pop();
//		}
//	}
//		
//	
//	cout << result;
//}
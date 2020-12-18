////문제: 그리디, 우선순위큐
////참고: https://js1jj2sk3.tistory.com/14
////시간복잡도: O(N+K)
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//int n, k;
//vector<pair<int, int>> jew;//보석
//vector<int> bag;
//priority_queue<int> pq;
//
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		int m, v;
//		cin >> m >> v;
//		jew.push_back(make_pair(m, v));
//	}
//
//	for (int i = 0; i < k; i++) {
//		int m;
//		cin >> m;
//		bag.push_back(m);
//	}
//	//가장 무게 제한이 낮은 가방부터 비싼 보석을 넣어야한다.
//	//보석은 무게순, 가방은 최대무게순으로 정렬
//	sort(jew.begin(), jew.end());
//	sort(bag.begin(), bag.end());
//
//	
//	long long sum = 0;
//	for (int i = 0, j = 0; i < k; i++) {
//		while (j < n && jew[j].first <= bag[i]) {
//			pq.push(jew[j++].second);
//		}
//
//		if (!pq.empty()) {
//			sum+=pq.top();
//			pq.pop();
//		}
//	}
//
//	
//	cout << sum;
//
//}
////문제: 프린터큐 (실버3)
////알고리즘 :구현(우선순위큐)
////참고 : https://numerok.tistory.com/134
//
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int T;
//int main() {
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		int N, M;
//		queue<pair<int, int>> q; //인덱스, 문서번호
//		priority_queue<int > pq; //문서번호
//		int cnt=0;
//		cin >> N >> M;
//		for (int i = 0; i < N; i++) {
//			int in;
//			cin >> in;
//			q.push(make_pair(i, in));
//			pq.push(in);
//		}
//
//		//우선순위큐와 큐 비교
//		while (!q.empty()) {
//			int idx = q.front().first;
//			int value = q.front().second;
//			q.pop();
//			if (value == pq.top()) {
//				cnt++;
//				pq.pop();
//				if (idx == M) {
//					cout << cnt << endl;
//					break;
//				}
//
//			}
//			else
//			q.push(make_pair(idx, value));
//
//		}
//	}
//
//}

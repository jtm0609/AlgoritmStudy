////����: ������ť (�ǹ�3)
////�˰��� :����(�켱����ť)
////���� : https://numerok.tistory.com/134
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
//		queue<pair<int, int>> q; //�ε���, ������ȣ
//		priority_queue<int > pq; //������ȣ
//		int cnt=0;
//		cin >> N >> M;
//		for (int i = 0; i < N; i++) {
//			int in;
//			cin >> in;
//			q.push(make_pair(i, in));
//			pq.push(in);
//		}
//
//		//�켱����ť�� ť ��
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

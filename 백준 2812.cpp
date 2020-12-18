////문제: 크게 만들기 (골드 5)
////알고리즘: 덱, 그리디
////시간복잡도: O(N+K)
////참조: https://jaimemin.tistory.com/1318
//
//#include<iostream>
//#include<deque>
//using namespace std;
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	string str;
//	cin >> str;
//	deque<char> dq;
//	for (int i = 0; i < str.length(); i++) {
//		
//		while (k && !dq.empty() && dq.back() < str[i]) {
//			dq.pop_back();
//			k--;
//		}
//		dq.push_back(str[i]);
//
//	}
//
//	for (int i = 0; i < dq.size() - k; i++) {
//		cout << dq[i];
//	}
//}
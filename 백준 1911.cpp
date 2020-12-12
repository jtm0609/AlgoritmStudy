////문제 흙길보수하기 (실버2)
////알고리즘: 그리디
////시간복잡도: O(n)
////첫번째참조도 O(n)이다 why? 일자로 쭉 훑으면서 덮이지 않은것을 덮어주는거라 O(N)이다.
////1. 참조: https://velog.io/@junho5336/Algorithm-%EB%B0%B1%EC%A4%80-1911-%ED%9D%99%EA%B8%B8-%EB%B3%B4%EC%88%98%ED%95%98%EA%B8%B0
////2. 참조: https://jaimemin.tistory.com/1324
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int n, l; //웅덩이수(10^4), 널빤지길이
//
//int main() {
//	cin >> n >> l;
//	vector<pair<int, int>>v;
//	for (int i = 0; i < n; i++) {
//		int start, end;
//		cin >> start >> end;
//		v.push_back(make_pair(start, end));
//	}
//
//	sort(v.begin(), v.end());
//	int answer = 0;
//	int idx = 0;
//	for (int i = 0; i < v.size(); i++) {
//		if (idx >= v[i].second) {
//			continue;
//		}
//		if (v[i].first > idx)
//			idx = v[i].first;
//		int cnt = (v[i].second - (idx + 1)) / l + 1;
//		answer += cnt;
//		idx += l * cnt;
//		
//	}
//	cout << answer;
//
//
//}

////문제: 좌표정렬하기 (실버 5)
////알고리즘: 정렬
////푼날짜: 2020-12-24
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//vector<pair<int,int>> v;
//bool cmp(pair<int,int> a1, pair<int,int> a2) {
//	if (a1.first == a2.first) return a1.second < a2.second;
//	return a1.first < a2.first;
//
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cin >> x >> y;
//		v.push_back(make_pair(x, y));
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i].first << " " << v[i].second << "\n";
//}
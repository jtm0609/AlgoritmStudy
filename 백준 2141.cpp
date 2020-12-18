////문제: 우체국 (실버1)
//#include<iostream>
//#include<vector>
//#include<algorithm>
////틀림 문제가먼가이상함
//
//using namespace std;
//
//int n; //10^5
//int sum;
//vector<pair<long, long>> v;
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int idx, value;
//		cin >> idx >> value;
//		v.push_back(make_pair(idx, value));
//		sum += value;
//	}
//	sort(v.begin(), v.end());
//	sum = sum / 2;
//	int count = 0;
//	int idx = -1;
//	while (count < sum) {
//		idx++;
//		count += v[idx].second;
//		
//	}
//	cout << v[idx].first;
//}
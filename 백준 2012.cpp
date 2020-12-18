////문제: 등수매기기 (실버3)
////알고리즘: 정렬
////참고: https://peanut2016.tistory.com/5
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n;
//vector<int> v;
//int main(){
//	cin >> n;
//	long long ans = 0;
//	for (int i = 0; i < n; i++) {
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//
//	sort(v.begin(), v.end());
//	for (int i = 1; i <= n; i++) {
//		ans = ans + abs(i - v[i - 1]);
//	}
//	cout << ans;
//
//}
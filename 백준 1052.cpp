////문제: 물병
////알고리즘: 구현
////이진법으로 나타났을때 1의개수가 물이 들어있는 물병의개수다.ex) N=13 일때 1101-> 8L짜리 물병, 4L짜리물병, 1L짜리물병
////참조: https://jaimemin.tistory.com/1511
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, k;
//
//int solve() {
//	int ans = 0; //상점에서 구매한 물의개수
//	
//	while (1) {
//		int cnt = 0; //가져갈 물병의개수
//		int tempN = n;
//		while (tempN) {
//			if (tempN % 2 == 1) {
//				cnt++;
//			}
//			tempN = tempN / 2;
//		}
//		if (cnt <= k) {
//			return ans;
//		}
//		n++;
//		ans++;
//
//	}
//	
//}
//
//int main() {
//	cin >> n >> k;
//
//	int ret = solve();
//	cout << ret;
//}
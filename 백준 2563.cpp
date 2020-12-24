////문제: 색종이 (실버5)
////알고리즘: 구현
////푼 날짜: 2020-12-24
//#include<iostream>
//using namespace std;
//
//int map[101][101];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cin >> x >> y;
//		for (int j = x; j < x + 10; j++) {
//			for (int k = y; k < y + 10; k++) {
//				map[j][k] = 1;
//			}
//		}
//	}
//	int cnt = 0;
//	for (int i = 1; i < 101; i++) {
//		for (int j = 1; j < 101; j++) {
//			if (map[i][j] == 1) cnt++;
//		}
//	}
//	cout << cnt;
//}
////문제: 사탕게임 (실버4)
////알고리즘: 완전탐색
////참조: https://jaimemin.tistory.com/1068
////날짜: 2020/12/18
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//char map[51][51];
//int counting() {
//	int ret = 1;
//	//양 옆 카운팅
//	for (int i = 0; i < n; i++) {
//		int temp = 1;
//		for (int j = 0; j < n-1; j++) {
//			if (map[i][j] == map[i][j + 1]) temp++;
//			else {
//				ret = max(ret, temp);
//				temp = 1;
//			}
//	
//		}
//		ret = max(ret, temp);
//	}
//
//	//위 아래 카운팅
//	for (int i = 0; i < n; i++) {
//		int temp = 1;
//		for (int j = 0; j < n - 1; j++) {
//			if (map[j][i] == map[j + 1][i]) temp++;
//			else {
//				ret = max(ret, temp);
//				temp = 1;
//			}
//		}
//		ret = max(ret, temp);
//	}
//	return ret;
//
//}
//int main() {
//	cin >> n;
//	int ret = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			//양 옆 swap
//			swap(map[i][j], map[i][j + 1]);
//			ret = max(ret, counting());
//			//백트래킹
//			swap(map[i][j], map[i][j + 1]);
//
//			//위 아래 swap
//			swap(map[j][i], map[j + 1][i]);
//			ret = max(ret, counting());
//			//백트래킹
//			swap(map[j][i], map[j + 1][i]);
//
//		}
//	}
//	cout << ret;
//}

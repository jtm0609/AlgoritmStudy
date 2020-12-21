////문제: 로또
////알고리즘: DFS
////푼 날짜: 2020-12-21
////참조: https://jaimemin.tistory.com/579
////설계참조: https://mygumi.tistory.com/191
////설계부분을 보면 dfs가 어떻게작동한는지 간단히 이해할수있음
////dfs=깊이를 우선으로 탐색한다.
//
//#include<iostream>
//using namespace std;
//
//int arr[13];
//int lotto[6];
//int k;
//
//void dfs(int idx, int cnt) {
//	if (cnt == 6) {
//		for(int i=0; i<6; i++)
//			cout << lotto[i] << " ";
//		cout << endl;
//		return;
//	}
//
//	for (int i = idx; i < k; i++) {
//		lotto[cnt] = arr[i];
//		dfs(i+1, cnt + 1);
//	}
//}
//int main() {
//	while (true) {
//		cin >> k;
//		if (k == 0) break;
//		for (int i = 0; i < k; i++) {
//			cin >> arr[i];
//		}
//		dfs(0,0);
//		cout << endl;
//	}
//
//}
////문제: 빗물 LV골드5
////알고리즘: 구현
////참고: https://hwan-shell.tistory.com/276
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//int map[500];
//
//
////왼쪽 큰값찾기
//int find_left(int cur) {
//	int myMax = 0;
//	for (int i = 0; i<cur; i++) {
//		myMax=max(myMax, map[i]);
//	}
//	return myMax;
//}
//
//int find_right(int cur) {
//	int myMax = 0;
//	for (int i = m-1; i >cur; i--) {
//		myMax=max(myMax, map[i]);
//	}
//	return myMax;
//}
//int solve() {
//	int ans=0;
//	for (int i = 1; i < m-1; i++) {
//		//왼쪽최대값
//		int  maxL= find_left(i);
//		//오른쪽최댓값
//		int maxR=find_right(i);
//		int comp = min(maxL, maxR);
//
//		//테스트케이스 3번 같은경우때문에 max를 해줘야함
//		ans += max(0,comp - map[i]);
//		
//		
//
//	}
//	return ans;
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> map[i];
//	}
//
//	int ret = 0;
//	ret = solve();
//	cout << ret;
//
//}
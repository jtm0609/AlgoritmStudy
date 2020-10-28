////문제: 톱니바퀴
////알고리즘: 시뮬레이션
////https://rebas.kr/786 참조하여 풀었음
////1. 먼저 각 톱니바퀴의 상태를 확인하여 톱니바퀴들의 방향을 체크한후
////2. 각 톱니바퀴들을 회전시켜준다
//
//#include<iostream>
//#include<queue>
//#include<cstdio>
//using namespace std;
//
////톱니바퀴 i(2)<-> 톱니바퀴 i(6)
//int wheel[4][8];
//int k; //회전 횟수
//queue<pair<int, int>>q;
//
////톱니바퀴 회전
//void rotation(int n, int d) {
//	int t[8];
//	//시계방향 회전
//	if (d == 1) {
//		for (int i = 0; i < 8; i++) {
//			t[(i + 1) % 8] = wheel[n][i];
//		}
//	}
//	//반시계방향회전
//	else {
//		for (int i = 0; i < 8; i++) {
//			t[i] = wheel[n][(i + 1) % 8];
//		}
//	}
//	
//	//회전한 배열을 원본배열로 복사
//	for (int i = 0; i < 8; i++)
//		wheel[n][i] = t[i];
//
//}
//
//void solve() {
//
//	while (k--) {
//		int n, d;
//		cin >> n >> d;
//		n--;
//
//		int direct[4] = { 0 };
//		direct[n] = d;
//		//오른쪽 톱니바퀴 비교
//		for (int i = n; i < 3; i++) {
//			if (wheel[i][2] != wheel[i + 1][6])
//				direct[i + 1] = -direct[i];
//		}
//		//왼쪽 톱니바퀴 비교
//		for (int i = n; i > 0; i--) {
//			if (wheel[i][6] != wheel[i - 1][2])
//				direct[i - 1] = -direct[i];
//		}
//
//		//방향이 0이 아니라면
//		//저장한 방향따라 톱니바퀴들 회전
//		for (int i = 0; i < 4; i++) {
//			if (direct[i]) {
//				rotation(i, direct[i]);
//			}
//
//		}
//	}
//}
//
//int main() {
//	int ans=0;
//	//톱니바퀴정보 입력
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 8; j++) {
//			scanf("%1d", &wheel[i][j]);
//		}
//	}
//
//	cin >> k;
//	solve();
//	for (int i = 0; i < 4; i++)
//		if (wheel[i][0])
//			ans += 1 << i; //비트연산자 사용
//
//	cout << ans;
//
//
//
//}
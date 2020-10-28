////문제: 경사로
////알고리즘: 시뮬레이션
////https://rebas.kr/788 참고하여 풀었음
//
//#include<iostream>
//using namespace std;
//
//int n;
//int l; //경사로의 길이
//int map[200][100];
//int ans;
//
//
//void solve(int i) {
//	int cnt = 1;
//	for (int j = 0; j < n - 1; j++) {
//		int d = map[i][j + 1] - map[i][j];
//		//현재칸이랑 다음칸이랑 차이가0이라면
//		if (d == 0)
//			cnt++;
//
//		//차이가 1이라면 올라가는 경사로
//		else if (d == 1 && cnt >= l)
//			cnt = 1; //다시 초기화
//
//		//차이가 -1이라면 내려가는 경사로
//		else if (d == -1 && cnt >= 0)
//			cnt = -l + 1;
//	
//		else
//			return;
//
//	
//	}
//	if (cnt >= 0)
//		ans += 1;
//	
//			
//
//}
//
//int main() {
//	cin >> n >> l;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	//배열의 세로탐색을 위해 세로부분을 더해준다
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			map[n + i][j] = map[j][i];
//		}
//	}
//	
//	for (int i = 0; i < 2*n; i++) {
//		solve(i);
//	}
//	cout << ans;
//
//
//	
//
//
//
//}
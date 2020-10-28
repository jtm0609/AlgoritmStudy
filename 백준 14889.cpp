////문제: 스타트와링크
////알고리즘: 브루트포스
////https://fjvbn2003.tistory.com/434 참고하여 풀었음
//
//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//int N;
//int map[20][20];
//int visited[20];
//int ans = 100000000;
//void solve(int cnt, int cur) {
//	
//	//이등분이됬다면(방문된거, 방문되지않은거) 
//	//a,b에 각각 합산
//	if (cnt == N / 2) {
//		int a = 0;
//		int b = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = i+1; j < N; j++) {
//				if (visited[i] && visited[j]) {
//					a += map[i][j];
//					a += map[j][i];
//				}
//				else if (!visited[i] && !visited[j]) {
//					b += map[i][j];
//					b += map[j][i];
//				}
//
//			}
//		}
//		//최솟값 비교
//		ans = min(ans, abs(a - b));
//
//
//	}
//	//재귀를 이용해 2등분
//	for (int i = 0; i < N; i++) {
//		//i>cur을 해줌으로써 전인덱스보다 큰인덱스만 참조함
//		if (visited[i] == false && i > cur) {
//			visited[i] = true;
//			solve(cnt + 1, i);
//			//백트래킹
//			visited[i] = false;
//		}
//		
//	}
//}
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) 
//		for(int j=0; j<N; j++)
//			cin >> map[i][j];	
//
//	
//	solve(0, -1);
//	cout << ans;
//
//
//
//
//}
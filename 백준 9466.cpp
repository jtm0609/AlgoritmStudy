////문제: 텀 프로젝트
////알고리즘: dfs
////참고: https://rile1036.tistory.com/106
//
//
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int t;
//int n;
//int s[100001];
//bool visit[100001];
//bool check[100001];
//int cnt;
//void dfs(int idx) {
//	visit[idx] = true;
//	int next = s[idx];
//	
//	//처음방문했다면 탐색
//	if (!visit[next])
//		dfs(next);
//
//	//방문한곳이면 싸이클이거나, 한명이 한팀을 이루고있을거임
//	else {
//		if (!check[next]) {
//			for (int i = next; i != idx; i = s[i]) cnt++;
//				cnt++;
//
//		}
//	}
//
//	//싸이클하면서 체크한배열,
//	//싸이클에 포함되거나 포함되지않은경우이므로 true로하여 다음순회할때 해당 인덱스를 건너뛰고진행
//	check[idx] = true;
//}
//
////배열 초기화
//void init() {
//	memset(s, 0, sizeof(s));
//	memset(visit, false, sizeof(visit));
//	memset(check, false, sizeof(visit));
//
//}
//
//int main() {
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		init();
//		cin >> n;
//		for (int j = 1; j <= n; j++) {
//			cin >> s[j];
//		}
//		cnt = 0;
//		for (int j = 1; j <= n; j++) {
//			if(!visit[j])
//			dfs(j);
//
//		}
//		//혼자인팀 출력
//		cout << n - cnt << endl;
//		
//	}
//
//}
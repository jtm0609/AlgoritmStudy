////문제: 숨바꼭질(실버 1)
////알고리즘: BFS
////참고: https://jaimemin.tistory.com/581
//#include<iostream>
//#include<queue>
//using namespace std;
//bool visited[100000];
//
//int bfs(int start, int tar) {
//	queue<pair<int, int>> q; //위치, 경과시간
//	q.push(make_pair(start, 0));
//	visited[start] = true;
//	while (!q.empty()) {
//		int cur = q.front().first;
//		int time = q.front().second;
//		visited[cur] = true;
//		q.pop();
//
//		if (cur == tar)
//			return time;
//
//		if (cur + 1 <= 100000 && !visited[cur+1]) q.push(make_pair(cur + 1, time + 1));
//		if (cur - 1 >=0 && !visited[cur - 1]) q.push(make_pair(cur - 1, time + 1));
//		if (cur * 2 <= 100000&& !visited[cur*2]) q.push(make_pair(cur * 2, time + 1));
//
//	}
//
//}
//int main() {
//	int cur, tar;
//	cin >> cur >> tar;
//	int ret = bfs(cur,tar);
//	cout << ret<<endl;
//}
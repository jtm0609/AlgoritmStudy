////문제: 1로만들기(실버3)
////알고리즘: 최단거리 BFS orDP
////푼날짜: 2020-12-28
//#include<iostream>
//#include<queue>
//using namespace std;
//int n;
//bool visited[1000001];
//int BFS() {
//	
//	queue<pair<int,int>> q;
//	q.push(make_pair(n,0));
//
//	while (!q.empty()) {
//		int num = q.front().first; 
//		int cnt = q.front().second;
//		q.pop();
//		if (num == 1) return cnt;
//				
//		visited[num] = true;
//
//		if (num % 3 == 0  && !visited[num/3]) q.push(make_pair(num / 3,cnt+1));
//		if (num % 2 == 0 && !visited[num/2]) q.push(make_pair(num / 2,cnt+1));
//		 if(num>1 && !visited[num-1]) q.push(make_pair(num - 1,cnt+1));
//
//	}
//}
//
//int main() {
//	cin >> n;
//	int ret=BFS();
//	cout << ret;
//}

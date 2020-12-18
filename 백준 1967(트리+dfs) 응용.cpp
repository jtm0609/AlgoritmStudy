////문제: 트리의지름 (골드 4)
////알고리즘: 트리+dfs
////응용된 트리 dfs문제

//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//
//const int MAX = 10000 + 1;
//int n;
//bool visited[MAX]; //방문여부
////int grapth[MAX][MAX]=>다음과같이 메모리초과
//vector<pair<int, int>> grapth[MAX]; //메모리를 줄일 수있다.
//
//int diameter = 0; //지름
//int farthestNode = 0; //가장 멀리있는 노드
//
//void dfs(int node, int distance) {
//
//	if (visited[node]) {
//		return;
//	}
//	visited[node] = true;
//	//지름 업데이트
//	if (diameter < distance) {
//		diameter = distance;
//		farthestNode = node;
//	}
//	//탐색
//	for (int i = 0; i < grapth[node].size(); i++) {
//		dfs(grapth[node][i].first, distance+grapth[node][i].second);
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		int node1, node2, cost;
//		cin >> node1 >> node2 >> cost;
//
//		//문제를 풀기위해 양방향으로 저장
//		grapth[node1].push_back(make_pair(node2, cost));
//		grapth[node2].push_back(make_pair(node1, cost));
//	}
//	memset(visited, false, sizeof(visited));
//
//	//루트에서 거리가 가장 먼 노드를 찾는다.
//	dfs(1, 0);
//
//	memset(visited, false, sizeof(visited));
//	diameter = 0;
//	//가장먼 노드를 찾았으면
//	//해당 정점에서 가장 거리가 먼 노드를 찾고 지름을 출력한다.
//	dfs(farthestNode, 0);
//
//	cout << diameter;
//}

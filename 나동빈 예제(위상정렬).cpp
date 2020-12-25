////위상정렬 예제
////학습한날짜: 2020-12-25
//#include<iostream>
//#include<vector>
//#include<queue>
//#define MAX 10
//using namespace std;
//
//int n, inDegree[MAX];
//vector<int> a[MAX];
//
//void topologySort() {
//	int result[MAX]; //위상정렬된 배열
//	queue<int> q;
//
//	//진입 차수가 0인 노드를 큐에 삽입
//	for (int i = 1; i <= n; i++) {
//		if (inDegree[i] == 0) q.push(i);
//	}
//
//	//정렬이 완전히 수행되려면 정확히 n개의 노드를 방문
//	for (int i = 1; i <= n; i++) {
//		//n개를 방문하기 전에 큐가 비어버리면 사이클이 발생한 것 -> 위상정렬못함
//		if (q.empty()) {
//			cout << "싸이클이 발생했습니다." << "\n";
//			return;
//		}
//		int x = q.front();
//		q.pop();
//		result[i] = x;
//		for (int i = 0; i < a[x].size(); i++) {
//			int next = a[x][i];
//			//새롭게 진입차수가 0이 된 정점을 큐에 삽입(-해주는이유는 간선삭제를의미함)
//			if (--inDegree[next] == 0)
//				q.push(next);
//		}
//	}
//
//	//출력
//	for (int i = 1; i <= n; i++) {
//		cout << result[i] << " ";
//	}
//}
//
//int main() {
//	n = 7;
//	a[1].push_back(2);
//	inDegree[2]++;
//	a[1].push_back(5);
//	inDegree[5]++;
//	a[2].push_back(3);
//	inDegree[3]++;
//	a[3].push_back(4);
//	inDegree[4]++;
//	a[4].push_back(6);
//	inDegree[6]++;
//	a[5].push_back(6);
//	inDegree[6]++;
//	a[6].push_back(7);
//	inDegree[7]++;
//	topologySort();
//}
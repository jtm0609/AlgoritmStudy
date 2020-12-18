////문제: 트리 (실버 1)
////알고리즘: 트리 + dfs
////간단한 트리 dfs문제

////참고: http://melonicedlatte.com/algorithm/2018/10/29/021039.html
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n,root,findNode;
//vector<int> a[51];
//int ans;
//
//void dfs(int current) {
//	
//	if (current == findNode)
//		return;
//	
//	if (a[current].size() == 0) {
//		ans++; return;
//	}
//
//	//이 예외를 추가안해서 자꾸 틀렸었음
//	//탐색하다가 자식노드가 하나남았는데, 만약 그자식노드가 삭제할 노드라면,
//	//그삭제할 노드의 부모는 리프노드가되기때문에 ans를 추가해줘야함
//	//ex) 4
//	//	  -1, 0, 0, 1
//	//	   3
//	//출력 결과: 2
//	else if (a[current].size() == 1) {
//		if (a[current][0] == findNode) 
//			ans++; 
//	}
//	
//	for (int i = 0; i < a[current].size(); i++) {
//		int node = a[current][i];
//		dfs(node);
//	}
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int parent;
//		cin >> parent;
//		if (parent != -1) {
//			a[parent].push_back(i);
//		}
//		else root = i;
//		
//	}
//	cin >> findNode;
//	
//	//탐색
//	dfs(root);
//
//
//	cout << ans << endl;
//	
//	
//}
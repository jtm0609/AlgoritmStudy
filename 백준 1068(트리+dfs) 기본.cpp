////����: Ʈ�� (�ǹ� 1)
////�˰���: Ʈ�� + dfs
////������ Ʈ�� dfs����

////����: http://melonicedlatte.com/algorithm/2018/10/29/021039.html
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
//	//�� ���ܸ� �߰����ؼ� �ڲ� Ʋ�Ⱦ���
//	//Ž���ϴٰ� �ڽĳ�尡 �ϳ����Ҵµ�, ���� ���ڽĳ�尡 ������ �����,
//	//�׻����� ����� �θ�� ������尡�Ǳ⶧���� ans�� �߰��������
//	//ex) 4
//	//	  -1, 0, 0, 1
//	//	   3
//	//��� ���: 2
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
//	//Ž��
//	dfs(root);
//
//
//	cout << ans << endl;
//	
//	
//}
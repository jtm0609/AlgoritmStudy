////����: �ζ�
////�˰���: DFS
////Ǭ ��¥: 2020-12-21
////����: https://jaimemin.tistory.com/579
////��������: https://mygumi.tistory.com/191
////����κ��� ���� dfs�� ����۵��Ѵ��� ������ �����Ҽ�����
////dfs=���̸� �켱���� Ž���Ѵ�.
//
//#include<iostream>
//using namespace std;
//
//int arr[13];
//int lotto[6];
//int k;
//
//void dfs(int idx, int cnt) {
//	if (cnt == 6) {
//		for(int i=0; i<6; i++)
//			cout << lotto[i] << " ";
//		cout << endl;
//		return;
//	}
//
//	for (int i = idx; i < k; i++) {
//		lotto[cnt] = arr[i];
//		dfs(i+1, cnt + 1);
//	}
//}
//int main() {
//	while (true) {
//		cin >> k;
//		if (k == 0) break;
//		for (int i = 0; i < k; i++) {
//			cin >> arr[i];
//		}
//		dfs(0,0);
//		cout << endl;
//	}
//
//}
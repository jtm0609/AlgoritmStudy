////����: ���� LV���5
////�˰���: ����
////����: https://hwan-shell.tistory.com/276
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//int map[500];
//
//
////���� ū��ã��
//int find_left(int cur) {
//	int myMax = 0;
//	for (int i = 0; i<cur; i++) {
//		myMax=max(myMax, map[i]);
//	}
//	return myMax;
//}
//
//int find_right(int cur) {
//	int myMax = 0;
//	for (int i = m-1; i >cur; i--) {
//		myMax=max(myMax, map[i]);
//	}
//	return myMax;
//}
//int solve() {
//	int ans=0;
//	for (int i = 1; i < m-1; i++) {
//		//�����ִ밪
//		int  maxL= find_left(i);
//		//�������ִ�
//		int maxR=find_right(i);
//		int comp = min(maxL, maxR);
//
//		//�׽�Ʈ���̽� 3�� ������춧���� max�� �������
//		ans += max(0,comp - map[i]);
//		
//		
//
//	}
//	return ans;
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> map[i];
//	}
//
//	int ret = 0;
//	ret = solve();
//	cout << ret;
//
//}
////����: ��Ϲ���
////�˰���: �ùķ��̼�
////https://rebas.kr/786 �����Ͽ� Ǯ����
////1. ���� �� ��Ϲ����� ���¸� Ȯ���Ͽ� ��Ϲ������� ������ üũ����
////2. �� ��Ϲ������� ȸ�������ش�
//
//#include<iostream>
//#include<queue>
//#include<cstdio>
//using namespace std;
//
////��Ϲ��� i(2)<-> ��Ϲ��� i(6)
//int wheel[4][8];
//int k; //ȸ�� Ƚ��
//queue<pair<int, int>>q;
//
////��Ϲ��� ȸ��
//void rotation(int n, int d) {
//	int t[8];
//	//�ð���� ȸ��
//	if (d == 1) {
//		for (int i = 0; i < 8; i++) {
//			t[(i + 1) % 8] = wheel[n][i];
//		}
//	}
//	//�ݽð����ȸ��
//	else {
//		for (int i = 0; i < 8; i++) {
//			t[i] = wheel[n][(i + 1) % 8];
//		}
//	}
//	
//	//ȸ���� �迭�� �����迭�� ����
//	for (int i = 0; i < 8; i++)
//		wheel[n][i] = t[i];
//
//}
//
//void solve() {
//
//	while (k--) {
//		int n, d;
//		cin >> n >> d;
//		n--;
//
//		int direct[4] = { 0 };
//		direct[n] = d;
//		//������ ��Ϲ��� ��
//		for (int i = n; i < 3; i++) {
//			if (wheel[i][2] != wheel[i + 1][6])
//				direct[i + 1] = -direct[i];
//		}
//		//���� ��Ϲ��� ��
//		for (int i = n; i > 0; i--) {
//			if (wheel[i][6] != wheel[i - 1][2])
//				direct[i - 1] = -direct[i];
//		}
//
//		//������ 0�� �ƴ϶��
//		//������ ������� ��Ϲ����� ȸ��
//		for (int i = 0; i < 4; i++) {
//			if (direct[i]) {
//				rotation(i, direct[i]);
//			}
//
//		}
//	}
//}
//
//int main() {
//	int ans=0;
//	//��Ϲ������� �Է�
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 8; j++) {
//			scanf("%1d", &wheel[i][j]);
//		}
//	}
//
//	cin >> k;
//	solve();
//	for (int i = 0; i < 4; i++)
//		if (wheel[i][0])
//			ans += 1 << i; //��Ʈ������ ���
//
//	cout << ans;
//
//
//
//}
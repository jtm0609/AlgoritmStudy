////����: ����
////�˰���: �ùķ��̼�
////https://rebas.kr/788 �����Ͽ� Ǯ����
//
//#include<iostream>
//using namespace std;
//
//int n;
//int l; //������ ����
//int map[200][100];
//int ans;
//
//
//void solve(int i) {
//	int cnt = 1;
//	for (int j = 0; j < n - 1; j++) {
//		int d = map[i][j + 1] - map[i][j];
//		//����ĭ�̶� ����ĭ�̶� ���̰�0�̶��
//		if (d == 0)
//			cnt++;
//
//		//���̰� 1�̶�� �ö󰡴� ����
//		else if (d == 1 && cnt >= l)
//			cnt = 1; //�ٽ� �ʱ�ȭ
//
//		//���̰� -1�̶�� �������� ����
//		else if (d == -1 && cnt >= 0)
//			cnt = -l + 1;
//	
//		else
//			return;
//
//	
//	}
//	if (cnt >= 0)
//		ans += 1;
//	
//			
//
//}
//
//int main() {
//	cin >> n >> l;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	//�迭�� ����Ž���� ���� ���κκ��� �����ش�
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			map[n + i][j] = map[j][i];
//		}
//	}
//	
//	for (int i = 0; i < 2*n; i++) {
//		solve(i);
//	}
//	cout << ans;
//
//
//	
//
//
//
//}
////����: � LV�����2
////�˰���: ����
//
//#include<iostream>
//using namespace std;
//
////�Ƚ��,�ּҸƹڼ�,�ִ�ƹڼ�, (���)�ƹ���������, (�޽Ľ�)�ƹ��ǰ��Ҽ�
//int N, m, M, T, R;
//int cur_m;
//int cur_n;
//int time;
//int main() {
//	cin >> N >> m >> M >> T >> R;
//	cur_m = m;
//
//	//��� ���Ұ��
//	if ((m + T > M)) {
//		cout << -1;
//		return 0;
//	}
//
//	while (cur_n<N) {
//		time++;
//		//�����
//		if (cur_m + T <= M) {
//			cur_n++;
//			cur_m = cur_m + T;
//		}
//		//�޽��ʿ�
//		else {
//			if (cur_m - R < m) {
//				cur_m = m;
//				continue;
//			}
//			cur_m = cur_m - R;
//		}
//	}
//	cout << time;
//}
//

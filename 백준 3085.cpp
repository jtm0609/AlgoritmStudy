////����: �������� (�ǹ�4)
////�˰���: ����Ž��
////����: https://jaimemin.tistory.com/1068
////��¥: 2020/12/18
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n;
//char map[51][51];
//int counting() {
//	int ret = 1;
//	//�� �� ī����
//	for (int i = 0; i < n; i++) {
//		int temp = 1;
//		for (int j = 0; j < n-1; j++) {
//			if (map[i][j] == map[i][j + 1]) temp++;
//			else {
//				ret = max(ret, temp);
//				temp = 1;
//			}
//	
//		}
//		ret = max(ret, temp);
//	}
//
//	//�� �Ʒ� ī����
//	for (int i = 0; i < n; i++) {
//		int temp = 1;
//		for (int j = 0; j < n - 1; j++) {
//			if (map[j][i] == map[j + 1][i]) temp++;
//			else {
//				ret = max(ret, temp);
//				temp = 1;
//			}
//		}
//		ret = max(ret, temp);
//	}
//	return ret;
//
//}
//int main() {
//	cin >> n;
//	int ret = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			//�� �� swap
//			swap(map[i][j], map[i][j + 1]);
//			ret = max(ret, counting());
//			//��Ʈ��ŷ
//			swap(map[i][j], map[i][j + 1]);
//
//			//�� �Ʒ� swap
//			swap(map[j][i], map[j + 1][i]);
//			ret = max(ret, counting());
//			//��Ʈ��ŷ
//			swap(map[j][i], map[j + 1][i]);
//
//		}
//	}
//	cout << ret;
//}

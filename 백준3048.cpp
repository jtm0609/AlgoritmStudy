////����: ����
////��������:
////�˰���: ����
////Ǯ�̰���
////1. ������ ����ü�� �����ϰ�, �� ���̿����� �����(0,1) ���ĺ�������
////2. �ݺ������� ������ ���ϸ鼭 ������ �ٸ��� ��������, �� ���ǹ����� 0
////����: https://j2wooooo.tistory.com/132
//#include<iostream>
//using namespace std;
//struct Ant {
//	int dir;
//	char alpha;
//};
//int N1, N2,T;
////���ĺ� 27��
//Ant ant[27];
//int main() {
//	
//	cin >> N1 >> N2;
//	char alpha;
//	for (int i = 0; i < N1; i++) {
//		cin >> alpha;
//		ant[N1 - 1 - i] = { 0,alpha };
//	}
//
//	for (int i = 0; i < N2; i++) {
//		cin >> alpha;
//		ant[N1 + i] = { 1,alpha };
//	}
//
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		for (int j = 0; j < N1 + N2 - 1; j++) {
//			if ((ant[j].dir != ant[j + 1].dir && ant[j].dir == 0)) {
//				Ant temp = ant[j];
//				ant[j] = ant[j + 1];
//				ant[j + 1] = temp;
//				j++;
//			}
//		}
//	}
//
//	for (int i = 0; i < N1 + N2; i++) {
//		cout << ant[i].alpha;
//	}
//}
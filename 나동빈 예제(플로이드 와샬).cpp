////�÷��̵� �ͼ� �˰���
////��� �������� ������������� �ִ� ��� ���ϱ�
//
//#include<iostream>
//using namespace std;
//int INF = 10000000;
//
////�ڷ� �迭�� �ʱ�ȭ
//int a[4][4] = {
//	{0, 5, INF, 8},
//	{7, 0, 9 ,INF},
//	{2, INF, 0, 4},
//	{INF, INF,3, 0}
//};
//
//void floyWarshall() {
//	//��� �׷����� �ʱ�ȭ�մϴ�.
//	int number = 4;
//	int d[4][4];
//
//	//��� �׷����� �ʱ�ȭ�մϴ�.
//	for (int i = 0; i < number; i++) {
//		for (int j = 0; j < number; j++) {
//			d[i][j] = a[i][j];
//		}
//	}
//
//	// k = ���İ��� ���
//	for (int k = 0; k < number; k++) {
//		// i = ��� ���
//		for (int i = 0; i < number; i++) {
//			// j= ���� ���
//			for (int j = 0; j < number; j++) {
//				//��߳��(i)���� k�� ���ļ� �������(j)�ΰ��°�찡 , �׳� ��߳��(i)���� �������(j)�ΰ��°�캸�� �۴ٸ�
//				if (d[i][k] + d[k][j] < d[i][j]) {
//					d[i][j] = d[i][k] + d[k][j];
//				}
//			}
//		}
//	}
//
//	//������
//	for (int i = 0; i < number; i++) {
//		for (int j = 0; j < number; j++) {
//			cout << d[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//}
//
//int main() {
//	floyWarshall();
//}
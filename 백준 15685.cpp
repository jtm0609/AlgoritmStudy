////����: �巡��Ŀ��
////�˰���: �ùķ��̼�
////y��ǥ�������̹Ƿ� �ݽð����
////https://na982.tistory.com/97 �����Ͽ�Ǯ����
////1. ���� ����ǥ�� ���⸦ ��������, 
////2. ��ǥ���� ����ȹ��⿡���� ȸ���̵���Ŵ
//
//#include <iostream>
//#include<vector>
//using namespace std;
//int n;\
//int map[101][101];
//bool isInside(int a, int b) {
//	return (a >= 0 && a < 101) && (b >= 0 && b < 101);
//}
//int dir[4][2] = { {0,1},{-1,0},{0,-1},{1,0} };//���ϼ���
//
//
////����ǥ�� ����
//
//int main() {
//	cin >> n;
//
//	for (int a = 0; a < n; a++) {
//		int x, y, d, g;
//		int curve[1024];
//		int curve_size = 0;
//		cin >> x >> y >> d >> g;
//
//		//�������� ����	
//		curve[curve_size++] = d;
//		map[y][x] = 1;
//
//		//����ǥ���� ���⼳��
//		//����������������,(����������� �����巡��Ŀ���̹Ƿ� ������ �������ʿ����)
//		for (int i = 0; i < g; i++) {
//			for (int j = curve_size - 1; j >= 0; j--) {
//				curve[curve_size++] = (curve[j] + 1) % 4;
//			}
//		}
//
//		//�׸���
//		for (int i = 0; i < curve_size; i++) {
//			y += dir[curve[i]][0];
//			x += dir[curve[i]][1];
//			if (!isInside(x, y))
//				continue;
//			map[y][x] = 1;
//		}
//	}
//
//	int ret = 0;
//		//�簢��üũ
//	for (int y = 0; y < 100; y++) {
//		for (int x = 0; x < 100; x++) {
//			if (map[y][x] && map[y][x + 1] && map[y + 1][x] && map[y + 1][x + 1])
//				ret++;
//		}
//	}
//	cout << ret;
//
//
//
//	
//}

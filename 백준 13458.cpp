////����: ���谨��
////�˰���: ����
////�ð� ���⵵ O(n^2)���� �����߾��µ� �ð��ʰ��� ���� 
////+ int���� �ִ��� 2147483647�� ��20���̹Ƿ�,
////+�������� �Ѽ��� �鸸*�鸸= �� 1�����ɶ���, ���������� �ʰ��Ͽ� �����̳�
////+���� �ִ밪�� 9����� long long���� ���
//
////https://velog.io/@skyepodium/%EB%B0%B1%EC%A4%80-13458-%EC%8B%9C%ED%97%98-%EA%B0%90%EB%8F%85 �����ؼ� O(n)���� Ǯ����
//#include<iostream>
//using namespace std;
//
//int n; //������
//int a; //�����ڼ�
//int b, c; //�Ѱ�����, �ΰ������� �����Ҽ��ִ� �����ڼ�,
//long long super, support; //�Ѱ�����, �ΰ������� ��
//int testers[1000000];
//long long ans;
//
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> testers[i];
//	}
//	cin >> b >> c;
//
//
//	for (int i = 0; i < n; i++) {
//		//�Ѱ������� ��
//		testers[i] = testers[i] - b;
//		super++;
//
//		//�ΰ������� ��
//		if (testers[i] > 0) {
//			support += testers[i] / c;
//
//			//�������� ������ �� �������� �Ѹ�� �ø�
//			if (testers[i] % c > 0)
//				support++;
//		}
//	}
//
//	
//
//	ans = super + support; //�Ѱ�����+ �ΰ�����
//	cout << ans;
//
//}
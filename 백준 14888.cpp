////����: ������ �����ֱ�
////�˰���: ���Ʈ���� + ��Ʈ��ŷ
//
//#include<iostream>
//using namespace std;
//
//int n;
//int num[11]; //����
//int operators[4]; //�����ڰ���
//int mymin = 1000000000;
//int mymax = -1000000000;
//void solve(int result,int idx) {
//	//�ִ� ��
//	if (idx == n) {
//		if (result > mymax)
//			mymax = result;
//		if (result < mymin)
//			mymin = result;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		//������ �����˻�
//		if (operators[i] > 0) {
//			//������ �ϳ� ��������Ƿ� 1�� �ٿ���
//			operators[i]--;
//			//����
//			if (i == 0)
//				solve(result + num[idx], idx + 1);
//			//����
//			else if (i == 1)
//				solve(result - num[idx], idx + 1);
//			//����
//			else if (i == 2)
//				solve(result * num[idx], idx + 1);
//			//������
//			else if (i == 3)
//				solve(result / num[idx], idx + 1);
//
//			//��Ʈ��ŷ: �ٸ������ڸ� ����� ���̹Ƿ� �Ʊ� �ٿ��� ������ ������ �÷���
//			operators[i]++;
//		}
//	}
//	
//		
//	
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) 
//		cin >> num[i];
//
//	for (int i = 0; i < 4; i++)
//		cin >> operators[i];
//
//
//		solve(num[0], 1);
//		cout << mymax<<endl;
//		cout << mymin;
//	
//}
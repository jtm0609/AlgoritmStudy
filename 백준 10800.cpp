////����: �÷���(���3)
////�˰���: ����
////����: https://plzfdaylife.tistory.com/153 +ȣ���� ����
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int MN = 200000 + 1;
//int n, sum, colorSum[MN], ret[MN];
//struct Ball {
//	int c, s, idx;
//}
//ball[MN];
//bool cmp(Ball b1, Ball b2) {
//	return b1.s < b2.s;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> ball[i].c >> ball[i].s;
//		ball[i].idx = i;
//	}
//	//����� ���� ������ ����
//	sort(ball, ball + n, cmp);
//
//	for (int i = 0, j = 0; i < n; i++) {
//		//���� ������ ���� ������ ũ���� ���ϱ�
//		for (; ball[i].s > ball[j].s; j++) {
//			sum += ball[j].s;
//			//���򺰷� ��ũ�� ���� ���ϱ�
//			colorSum[ball[j].c] += ball[j].s;
//		}
//		//��������� �������� ���� ũ����- ������� �������� ������
//		ret[ball[i].idx] = sum - colorSum[ball[i].c];
//	}
//
//	for (int i = 0; i < n; i++) {
//		//printf("%d\n", ret[i]);
//		cout << ret[i]<<"\n";
//	}
//
//}
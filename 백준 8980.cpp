////����: �ù�
////�˰���: �׸���
////��������: https://maivve.tistory.com/36
////�ڵ�����: https://keoroo.tistory.com/12
////�ڵ� ����κ��� �ʹ������
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct Town {
//	int from, to, cost;
//};
////������, ����� ������ ����
//int cmp(Town a, Town b) {
//	if (a.to == b.to) {
//		return a.from < b.from;
//	}
//	return a.to < b.to;
//}
//int box[2001]; //�� �������� Ʈ���� ����ִ� �����ǰ���
//Town town[10001]; //�ڽ�����(�����¸�����ȣ, �޴¸�����ȣ, �����¹ڽ� ����)
//int main() {
//	int ans = 0;
//	int n, c, m;
//	cin >> n >> c >> m;
//
//	for (int i = 0; i < m; i++)
//		cin >> town[i].from >> town[i].to >> town[i].cost;
//
//	sort(town, town + m, cmp);
//	for (int i = 0; i < m; i++) {
//		
//		Town now = town[i];//�̹��� �� �Է°�
//		int already = 0; //�־��� �������� �ִ���ڼ�
//
//
//			for (int i = now.from; i < now.to; i++) {
//				already = max(already, box[i]);
//			}
//			//������ �ִ밹���� �ѱ�� �ֱ⶧����
//			//���� �����ִ� ������ ������ �����뷮�� �������� ����
//			int add = min(now.cost, c - already);
//
//			//�������߰�
//			for (int i = now.from; i < now.to; i++) {
//				box[i] += add;
//			}
//			ans += add; //�߰��� ��ŭ �信 ������
//		
//	}
//	cout << ans;
//}
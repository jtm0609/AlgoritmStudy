////����: ���οͽ�ȣ�� (�ǹ�3)
////�˰��� : ����
//
////���� ������ ������ �߸��о Ǫ�µ� �����ɷȴ�
////"������ ������ 0�����̰�  Ʈ���� ���ο� �������� ��, ��� ��ȣ���� ������ �������̰�, ����Ŭ�� �� ������ �����̴�."
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct Signal {
//	int D, R, G;
//};
//int N, L;
//int pos,t;
//vector<Signal> signal;
//
//int main() {
//	cin >> N >> L;
//	for (int i = 0; i < N; i++) {
//		int d, r, g;
//		cin >> d >> r >> g;
//		signal.push_back({ d,r,g });
//	}
//
//	while (pos!=L) {
//		t++;pos++;
//		if (!signal.empty()) {
//			Signal curSignal = signal.front();
//			//���� �̵�����ġ�� ��ȣ����ġ���
//			if (pos == curSignal.D) {
//				
//				int candi = t % (curSignal.R + curSignal.G);
//				
//				//�������̶��
//				if ((candi  < curSignal.R) ) {
//					int suspend = curSignal.R - candi;
//					//���
//					t+=suspend;
//					
//				}
//				//��ȣ���� �������� ���� ��ȣ�� ����
//				signal.erase(signal.begin() + 0);
//
//			}
//		}
//	}
//	cout << t;
//}
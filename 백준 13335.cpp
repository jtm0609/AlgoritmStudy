////����: Ʈ��(�ǹ�1)
////��������
////1. Ʈ���Ǽ� n, �ٸ��� ���� w, �ٸ����ִ����� L
////2. �� Ʈ������ �ϳ��� �����ð��� �ϳ��� �������̸�ŭ �̵�
////3. Ʈ�����ǹ�������<=�ٸ��ִ�����(L)
////�˰���: ����
////Ǯ��
////1. ť���
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct Bridge {
//	int move;
//	int weight;
//};
//int n, w, L;
//int t; //�ð�
//int cur; //���� �ٸ����ִ� Ʈ�� ����
//queue<int> truck;
//vector<Bridge> bridge;
//
////�̵�
//int solve() {
//
//	while (1) {
//		t++;
//		//�ٸ����� Ʈ���� �̵�
//		for (int i = 0; i < bridge.size(); i++) {
//			bridge[i].move++;
//			//�ٸ��� �������ٸ�
//			if (bridge[i].move > w) {
//				cur -= bridge[i].weight;
//				bridge.erase(bridge.begin() + i);
//				i--;
//			}
//		}
//		//������� Ʈ�����̵�
//		if (!truck.empty()) {
//		if (cur + truck.front() > L) continue;
//		cur += truck.front();
//		bridge.push_back({ 1,truck.front() });
//		truck.pop();
//		}
//
//		//��������
//		if (bridge.empty() && truck.empty())
//			break;
//	}
//	return t;
//}
//int main() {
//	cin >> n >> w >> L;
//	for (int i = 0; i < n; i++) {
//		int in;
//		cin >> in;
//		truck.push(in);
//	}
//
//	int ret = solve();
//	cout << ret;
//}
//

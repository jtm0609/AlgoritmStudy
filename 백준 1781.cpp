////����: �Ŷ�� (���1)
////�˰���: �׸���, �켱����ť
////����: https://jaimemin.tistory.com/1326
////������ �߸������߰�, ������ĵ� Ʋ�Ⱦ���
////��������� ū�ͺ��� �켱����ť�� ���� �Ŷ�鰳���� ū���� ����
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//int n; //O(10^5)
//
//priority_queue<int> pq; //�Ŷ�鰳��
//
//int main() {
//	cin >> n;
//	vector<pair<int, int>> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i].first >> v[i].second;
//		--v[i].first;
//	}
//	//��������� ū������ ����
//	sort(v.begin(), v.end(),greater<pair<int,int>>());
//		
//	int result = 0;
//	int idx = 0;
//	//��������� ��������
//	//(��������� ������������ Ž���ϸ�, ��������� ����ū �Ŷ�鰳������������ �ұ��ϰ� ���������¼�������)
//	for (int i = n-1; i >=0; i--) {
//		for (; idx < n && v[idx].first == i; idx++) {
//			pq.push(v[idx].second);
//		}
//		//max heap
//		if (!pq.empty()) {
//			result += pq.top();
//			pq.pop();
//		}
//	}
//		
//	
//	cout << result;
//}
////����: �ٸ��� ������ Ʈ�� LV2
////�˰���: ť
////https://dokylee.tistory.com/65 ��������
//#include <string>
//#include <vector>
//#include<queue>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//	int answer = 0;
//	int sum = 0;
//	int idx = 0;
//	queue<int> q;
//
//	while (1) {
//		if (idx == truck_weights.size()) {
//			answer += bridge_length;
//			break;
//		}
//		//���� ����
//		answer++;
//
//		int tmp = truck_weights[idx];
//
//		//Ʈ���� �ٸ��� �ǳԴٸ�
//		if (q.size() == bridge_length) {
//			sum -= q.front();
//			q.pop();
//		}
//
//		//Ʈ���� �ٸ��� �ǳμ��ִٸ�
//		if (sum + tmp <= weight) {
//			q.push(tmp);
//			sum += tmp;
//			idx++;
//		}
//		//�ٸ��� �ǳμ����ٸ�(�ʸ� ������ų�������� 0������ ����Ʈ�� push)
//		else {
//			q.push(0);
//		}
//	}
//	return answer;
//}
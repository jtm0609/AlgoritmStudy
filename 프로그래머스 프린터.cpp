////����: ������
////�˰���: ť/�켱����ť
////Ǯ��: ť�� �켱����ť�� ���� �����, ���ذ��鼭, �μ⸦ ��û�ѹ����� ã�´�.
////https://regularmember.tistory.com/135 �����Ͽ���
//#include <string>
//#include <vector>
//#include<queue>
//using namespace std;
//
//int solution(vector<int> priorities, int location) {
//	int answer = 0;
//	priority_queue<int> pq;
//	queue <pair<int, int>> q;
//
//	for (int i = 0; i < priorities.size(); i++) {
//		q.push(make_pair(i, priorities[i]));
//		pq.push(priorities[i]);
//		
//	}
//
//	while (!q.empty()) {
//		int i = q.front().first;
//		int p = q.front().second;
//		q.pop();
//
//		//���� ������ �߿䵵�� ���� ���� �߿䵵��� �μ�
//		if (p == pq.top()) {
//			pq.pop();
//			answer += 1;
//
//			//�׸��� ����� ������ location�̶�� �װ� ������
//			if (i == location)
//				break;
//		}
//		//�ٽ� ť���ִ´�.
//		else {
//			q.push(make_pair(i, p));
//			}
//		}
//	
//	return answer;
//}
//����: ���ʰ� LV2
//�˰���: �켱����ť
//�ð����⵵: O(N)
#include <string>
#include <vector>
#include<algorithm>
#include<queue>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<int> q;
	for (int i = 0; i < scoville.size(); i++)   q.push(-scoville[i]);

	while (-q.top() < K && q.size() > 1) {
		int num1 = -q.top(); q.pop();
		int num2 = -q.top(); q.pop();

		//���´�
		answer++;
		int sco = num1 + (num2 * 2);
		q.push(-sco);
	}
	//������ 1����������, �װ��� k���� �۴ٸ� -1 ����
	if (-q.top() < K) return -1;
	return answer;
}
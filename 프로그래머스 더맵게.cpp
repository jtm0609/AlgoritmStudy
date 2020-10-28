//문제: 더맵게 LV2
//알고리즘: 우선순위큐
//시간복잡도: O(N)
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

		//섞는다
		answer++;
		int sco = num1 + (num2 * 2);
		q.push(-sco);
	}
	//마지막 1개남았을때, 그값이 k보다 작다면 -1 리턴
	if (-q.top() < K) return -1;
	return answer;
}
////문제: 프린터
////알고리즘: 큐/우선순위큐
////풀이: 큐와 우선순위큐를 각각 만들어, 비교해가면서, 인쇄를 요청한문서를 찾는다.
////https://regularmember.tistory.com/135 참고하였음
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
//		//현재 문서의 중요도가 가장 높은 중요도라면 인쇄
//		if (p == pq.top()) {
//			pq.pop();
//			answer += 1;
//
//			//그리고 출력한 문서가 location이라면 그게 정답임
//			if (i == location)
//				break;
//		}
//		//다시 큐에넣는다.
//		else {
//			q.push(make_pair(i, p));
//			}
//		}
//	
//	return answer;
//}
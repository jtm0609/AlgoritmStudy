////문제: 다리를 지나는 트럭 LV2
////알고리즘: 큐
////https://dokylee.tistory.com/65 참고했음
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
//		//매초 증가
//		answer++;
//
//		int tmp = truck_weights[idx];
//
//		//트럭이 다리를 건넜다면
//		if (q.size() == bridge_length) {
//			sum -= q.front();
//			q.pop();
//		}
//
//		//트럭이 다리를 건널수있다면
//		if (sum + tmp <= weight) {
//			q.push(tmp);
//			sum += tmp;
//			idx++;
//		}
//		//다리를 건널수없다면(초를 증가시킬목적으로 0무게의 더미트럭 push)
//		else {
//			q.push(0);
//		}
//	}
//	return answer;
//}
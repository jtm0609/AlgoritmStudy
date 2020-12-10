////문제: 트럭(실버1)
////문제설명
////1. 트럭의수 n, 다리의 길이 w, 다리의최대하중 L
////2. 각 트럭들은 하나의 단위시간에 하나의 단위길이만큼 이동
////3. 트럭들의무게의합<=다리최대하중(L)
////알고리즘: 구현
////풀이
////1. 큐사용
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
//int t; //시간
//int cur; //현재 다리에있는 트럭 무게
//queue<int> truck;
//vector<Bridge> bridge;
//
////이동
//int solve() {
//
//	while (1) {
//		t++;
//		//다리위에 트럭차 이동
//		for (int i = 0; i < bridge.size(); i++) {
//			bridge[i].move++;
//			//다리를 지나갔다면
//			if (bridge[i].move > w) {
//				cur -= bridge[i].weight;
//				bridge.erase(bridge.begin() + i);
//				i--;
//			}
//		}
//		//대기중인 트럭차이동
//		if (!truck.empty()) {
//		if (cur + truck.front() > L) continue;
//		cur += truck.front();
//		bridge.push_back({ 1,truck.front() });
//		truck.pop();
//		}
//
//		//종료조건
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

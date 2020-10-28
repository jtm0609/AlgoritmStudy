////문제: 치킨배달
////알고리즘: 브루트포스(dfs)
////https://na982.tistory.com/category/%EC%82%BC%EC%84%B1%20SW%20%EC%97%AD%EB%9F%89%20%ED%85%8C%EC%8A%A4%ED%8A%B8%20%EA%B8%B0%EC%B6%9C%20%ED%92%80%EC%9D%B4?page=4
//// 참조하여풀었음
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct POSI {
//	int x, y;
//};
//
//int n, m;
//int ans= 0x7fffffff;
//vector<POSI> house_v;
//vector<POSI> chicken_v;
//vector<POSI> pick_v;
//
//void dfs(int pos) {
//
//	//치킨집을 m개 픽했다면
//	if (pick_v.size() == m) {
//		int candi=0;
//		//각집의 치킨거리
//		//집과 픽한 치킨집들의 거리가 최소가되는 값을 구함
//		for (int i = 0; i < house_v.size(); i++) {
//			int min_dis = 1000000;
//			for (int j = 0; j < pick_v.size(); j++) {
//				min_dis=min(min_dis,abs(house_v[i].x - pick_v[j].x) + abs(house_v[i].y - pick_v[j].y));
//			}
//			//도시의 치킨거리
//			candi += min_dis;
//		}
//
//		//최소값 비교
//		if (ans > candi)
//			ans = candi;
//
//		return;
//	}
//
//	//dfs를 활용해 치킨집을 3개픽하는 경우의수 모두탐색
//	for (int i = pos; i < chicken_v.size(); i++) {
//		pick_v.push_back(chicken_v[i]);
//		dfs(i + 1);
//		//백트래킹
//		pick_v.pop_back();
//	}
//		
//}
//
//int main() {
//	POSI target;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int temp;
//			cin >> temp;
//			//집
//			if (temp == 1) {
//				target.x = i;
//				target.y = j;
//				house_v.push_back(target);
//			}
//			//치킨집
//			else if (temp == 2) {
//				target.x = i;
//				target.y = j;
//				chicken_v.push_back(target);
//			}
//		}
//	}
//
//	//탐색
//	dfs(0);
//	cout << ans;
//}
////문제: 나무제테크
////알고리즘: 구현
////문제를 잘못읽어서 양분이부족한부분에서 실수를 했음
////참조: https://jaimemin.tistory.com/1188 꾸준한 님이랑 코드 95%일치했음(나는 식물을 제거했지만, 꾸준한님은 임시벡터를 사용함)
////푼날짜: 2020-12-23
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, m, k;
//int add[11][11];
//int water[11][11];
//vector<int> tree_age[11][11];
//int dir[8][2] = {
//	{-1,0}, {0,1}, {1,0}, {0,-1}, {-1,1},{1,1},{1,-1},{-1,-1}
//};
//
//bool isInside(int a, int b) {
//	return (a >= 0 && a < n) && (b >= 0 && b < n);
//}
//
//int solve() {
//	//k년까지 제테크
//	for (int y = 0; y < k; y++) {
//
//		//봄 여름
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (!tree_age[i][j].empty()) {
//					int dead = 0;
//					vector<int> temp;
//					//나이가 작은순으로 오름차순
//					sort(tree_age[i][j].begin(), tree_age[i][j].end());
//					for (int t = 0; t < tree_age[i][j].size(); t++) {
//						int age = tree_age[i][j][t];
//						//양분이 자신의 나이이상이라면
//						if (water[i][j] >= age) {
//							//양분먹음
//							water[i][j] -= age;
//							//나이만큼 양분을 먹은 식물들의 나이를 증가시킴
//							temp.push_back(age + 1);
//						}
//
//						//땅에 양분이 부족하다면 죽은식물들의 나이를 누적함
//						else
//							dead += age / 2; 
//
//					}
//
//						//죽은 식물빼고 벡터 갱신
//						tree_age[i][j].clear();
//						for (int v = 0; v < temp.size(); v++)
//							tree_age[i][j].push_back(temp[v]);
//
//						//여름
//						water[i][j] += dead;
//					}
//				}
//			}
//		
//
//
//			//가을
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					if (!tree_age[i][j].empty()) {
//						for (int t = 0; t < tree_age[i][j].size(); t++) {
//							//나이가 5의배수라면
//							if (tree_age[i][j][t] % 5 == 0) {
//								//주변 8칸 번식
//								for (int d = 0; d < 8; d++) {
//									int nx = i + dir[d][0];
//									int ny = j + dir[d][1];
//									if (!isInside(nx, ny)) continue;
//									//나이가 1인 나무 생김
//									tree_age[nx][ny].push_back(1);
//								}
//							}
//						}
//					}
//				}
//			}
//
//			//겨울
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					water[i][j] += add[i][j];
//				}
//			}
//
//	}
//	int ret = 0;
//	//k년이 지난후 나무의개수
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (!tree_age[i][j].empty()) {
//				ret += tree_age[i][j].size();
//			}
//		}
//	}
//	return ret;
//}
//
//int main() {
//	cin >> n >> m >> k;
//
//	//각땅의 양분과 로봇이 추가할 양분 입력
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			water[i][j] = 5;
//			cin >> add[i][j];
//		}
//	}
//
//	//구매한 나무의 좌표, 나이
//	for (int i = 0; i < m; i++) {
//		int x, y, age;
//		cin >> x >> y >> age;
//		tree_age[x - 1][y - 1].push_back(age);
//	}
//
//	int ret = solve();
//	cout << ret;
//
//
//}

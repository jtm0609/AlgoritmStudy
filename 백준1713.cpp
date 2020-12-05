////문제: 후보추천하기 LV 실버1
////알고리즘: 구현
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, C;
//vector<pair<int,int>> v;
//
//bool mysort(pair<pair<int,int>,int> num1, pair<pair<int, int>, int> num2) {
//	if (num1.second != num2.second) {
//		return num1.second < num2.second;
//	}				
//	//추천수가 같다면
//	else if (num1.second == num2.second) {
//		//먼저들어온것이 더앞으로 정렬
//		return num1.first.first < num2.first.first;
//	}
//}
//
//bool anssort(pair<pair<int, int>, int> num1, pair<pair<int, int>, int> num2) {
//	return (num1.first.second < num2.first.second);
//}
//
//void solve(vector<pair<pair<int, int>,int>> candi) {
//	while (!v.empty()) {
//		bool isAlive = false;
//		
//
//		int idx = v.front().first;
//		int value = v.front().second;
//		v.erase(v.begin() + 0);
//
//		//추천한 사람이 사진틀에 있다면
//		for (int i = 0; i < candi.size(); i++) {
//			if (candi[i].first.second == value) {
//				candi[i].second += 1;
//				isAlive = true;
//				break;
//			}
//		}
//		if (isAlive) {
//			sort(candi.begin(), candi.end(), mysort);
//			continue;
//		}
//
//		//추천한사람이 사진틀에 없을때
//		else {
//			//추천한사람이 사진틀에없고, 꽉찼을때, 가장오래된 사진삭제
//			if (candi.size() == N) {
//				candi.erase(candi.begin() + 0);
//			}
//			candi.push_back(make_pair(make_pair(idx, value),0));
//			
//		}
//		
//		//추천수가 낮은순으로 정렬(추천수가 동일다면 시간이 오래된것을 앞으로)
//		sort(candi.begin(),candi.end(),mysort);
//				
//
//	}
//
//	//추천수가 많은순으로 정렬
//	sort(candi.begin(), candi.end(), anssort);
//	for (int i = 0; i < candi.size(); i++) {
//		cout << candi[i].first.second << " ";
//	}
//	
//
//
//}
//int main() {
//	
//	cin >> N;
//	cin >> C;
//
//	//<시간,사진번호>,투표수
//	vector<pair<pair<int, int>, int>> candi;
//	for (int i = 0; i < C; i++) {
//		int num;
//		cin >> num;
//		v.push_back(make_pair(i,num));
//	}
//	
//	solve(candi);
//
//
//}
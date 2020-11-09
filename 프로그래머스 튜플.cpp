////문제: 튜플 LV2
////알고리즘: 해시
////풀었음
//
//#include <string>
//#include <vector>
//#include<map>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//bool cmp(pair<string, int>a, pair<string, int> b) {
//	if (a.second > b.second) return true;
//	return false;
//}
//vector<int> solution(string s) {
//	vector<int> answer;
//	map<string, int> m;
//	//첫괄호 마지막 괄호 제외하고 탐색
//	for (int i = 1; i < s.length() - 1; i++) {
//		if (s[i] == '{') {
//			string temp;
//			int j;
//			for (j = i + 1; s[j] != '}'; j++) {
//				if (s[j] == ',') {
//					m[temp] += 1; //그키에 대한 값 증가
//					temp = "";
//					continue;
//				}
//				temp += s[j];
//			}
//			m[temp] += 1; //마지막부분은 ,를 못 만났으므로 +1증가시킴
//			i = j;
//		}
//	}
//
//	vector<pair<string, int>> vec(m.begin(), m.end()); //맵을 벡터로 옮김
//	sort(vec.begin(), vec.end(), cmp); //오름차순으로정렬
//
//	for (int i = 0; i < vec.size(); i++) {
//		answer.push_back(stoi(vec[i].first));
//	}
//	return answer;
//}
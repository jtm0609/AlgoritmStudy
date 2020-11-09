////문제: 위장 LV2
////알고리즘: 해시(map)
////참고: https://seoftware.tistory.com/70
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//	int answer = 1;
//	map<string, int> m;
//
//	//옷 종류별로 분류해서 개수를 센다.(같은종류의 옷의개수를 map에저장)
//	for (vector<string> c : clothes)
//		m[c[1]] += 1;
//
//	map<string, int> ::iterator it;
//	//총경우의 수 구하기
//	for (it = m.begin(); it != m.end(); it++)
//		answer *= it->second + 1;
//
//	//아무것도 선택하지않는 하나의 경우를빼고 리턴
//	return answer - 1;
//}
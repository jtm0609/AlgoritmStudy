////문제: H-index Lv2
////알고리즘: 정렬
//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//bool desc(int a, int b) {
//	return a > b;
//}
//int solution(vector<int> citations) {
//	int answer = 0;
//	sort(citations.begin(), citations.end(), desc);
//	for (int i = 0; i < citations.size(); i++) {
//		if (citations[i] <= answer) break;
//		answer++;
//	}
//	return answer;
//}
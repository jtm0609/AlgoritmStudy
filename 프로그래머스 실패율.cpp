////참고 https://velog.io/@seovalue/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%EC%8B%A4%ED%8C%A8%EC%9C%A8-C-%EC%B9%B4%EC%B9%B4%EC%98%A4-2019-Blind-Recruitment
//
//#include <string>
//#include <vector>
//#include<algorithm>
//#include<map>
//
//using namespace std;
//bool paircompare(const pair<int, double>&a, const pair<int, double>&b);
//vector<int> solution(int N, vector<int> stages) {
//	vector<int> answer;
//	//N 스테이지개수
//
//	int step = 1; //스테이지
//	vector<pair<int,double>> vec; //pair중요
//	sort(stages.begin(), stages.end());
//	//스테이지별로 벡터에 vec벡터에저장
//	while (step < N + 1) {
//		int clear = 0; //해당스테이지에서 도전한사람수
//		int challenge = 0; //해당스테이지를 꺠거나 도전하고있는 사람
//		double fault; //실패율
//		for (int i = 0; i < stages.size(); i++) {
//			if (stages[i] > step)
//				clear++;
//			else if (stages[i] == step) {
//				challenge++;
//				clear++;
//			}
//			//해당스테이지를 깨거나 도전한 사람이 아무도없을때, 실패율은 0
//			if (clear == 0)
//				fault = 0;
//			//실패율 계산
//			else
//				fault = (double)challenge / clear;
//
//		}
//				//스테이지 저장
//				vec.push_back({ step,fault });
//				step++;
//				
//					
//
//	}
//	//함수를 통해정렬
//	sort(vec.begin(), vec.end(), paircompare);
//	for (int i = 0; i < N; i++) {
//		answer.push_back(vec[i].first);
//	}
//
//
//
//
//	return answer;
//}
//
////sort 에서 비교하는함수 
//bool paircompare(const pair<int,double> &a, const pair<int, double> &b) {
//	if (a.second > b.second)
//		return true; //true면 정렬순위가 우선순위가 높음
//	else if (a.second == b.second) {
//		if (a.first < b.first)
//			return true;
//		else
//			return false; 
//
//	}
//	else return false; //false면 정렬 우선순위가낮음
//
//}
//
//int main() {
//
//
//}
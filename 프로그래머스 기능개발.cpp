////문제 : 기능개발 LV2
////알고리즘: 스택/큐
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//	while (!progresses.empty()) {
//
//		//날마다 스피드만큼 증가
//		for (int i = 0; i < progresses.size(); i++) {
//			progresses[i] += speeds[i];
//		}
//
//		int cnt = 0;
//		for (int i = 0; i < progresses.size(); i++) {
//			//진행율 100이 되었는지 확인
//			if (progresses[i] >= 100) {
//				cnt++;
//				progresses.erase(progresses.begin() + i);
//				speeds.erase(speeds.begin() + i);
//				i--;
//			}
//			//아니라면 탈출
//			else
//				break;
//		}
//		//배포가되었다면 추가
//		if (cnt != 0)
//			answer.push_back(cnt);
//	}
//
//	return answer;
//}
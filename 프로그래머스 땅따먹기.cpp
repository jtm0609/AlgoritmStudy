////문제: 땅따먹기 LV2
////알고리즘: 완전탐색+ DP
////참고: https://velog.io/@gowoonsori/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4cpp%EB%95%85%EB%94%B0%EB%A8%B9%EA%B8%B0
//#include <iostream>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//int solution(vector<vector<int> > land)
//{
//	int answer = 0;
//	for (int i = 0; i < land.size() - 1; i++) {
//		land[i + 1][0] += max(land[i][1], max(land[i][2], land[i][3]));
//		land[i + 1][1] += max(land[i][0], max(land[i][2], land[i][3]));
//		land[i + 1][2] += max(land[i][0], max(land[i][1], land[i][3]));
//		land[i + 1][3] += max(land[i][0], max(land[i][1], land[i][2]));
//	}
//
//	//마지막행의 최댓값구하기
//	answer = max(land[land.size() - 1][0], max(land[land.size() - 1][1], max(land[land.size() - 1][2], land[land.size() - 1][3])));
//	return answer;
//}
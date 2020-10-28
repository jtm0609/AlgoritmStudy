////문제: 숫자의표현 LV2
////알고리즘: 브루트포스
//#include <string>
//#include <vector>
//
//using namespace std;
//int solution(int n) {
//	//자기자신포함
//	int answer = 1;
//	for (int i = 1; i <= n; i++) {
//		int temp = i;
//		for (int j = i + 1; j <= n; j++) {
//			temp += j;
//			if (temp > n) break;
//			else if (temp == n) {
//				answer++;
//				break;
//			}
//		}
//
//	}
//	return answer;
//}
////문제: 구명보트 LV2
////알고리즘: 그리디 알고리즘
////참고: https://m.blog.naver.com/tkddn0928/221790401154
//
//#include <string>
//#include <vector>
//#include<algorithm>
//
//
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	int answer = 0;
//	sort(people.begin(), people.end());
//	int head = 0, tail = people.size() - 1;
//	//제일 무게가작은놈을 기준으로 무게가 젤큰놈이랑비교해나간다.
//	while (head <= tail) {
//		if (people[head] + people[tail] <= limit) {
//			head++; tail--;
//		}
//		else tail--;
//		answer++;
//	}
//
//	return answer;
//}
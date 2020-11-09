////10시 52분시작
////O(n3)으로 풀긴했는데, 
////https://cagongman.tistory.com/31 참고하면 string의 find함수를 이용하여 O(n2)로 풀수있음
//#include <string>
//#include <vector>
//
//using namespace std;
//string skills;
//bool check(char c) {
//	for (int i = 0; i < skills.size(); i++)
//		if (c == skills[i])   return true;
//
//	return false;
//}
//int solution(string skill, vector<string> skill_trees) {
//	int answer = 0;
//	skills = skill;
//	for (int i = 0; i < skill_trees.size(); i++) {
//		int k=0 ,j=0;
//		for (j = 0; j < skill_trees[i].size(); j++) {
//			if (check(skill_trees[i][j]))
//				if (skill_trees[i][j] == skill[k]) k++;
//				else break;
//		}
//		if (j == skill_trees[i].size())
//			answer++;
//	}
//	return answer;
//}
////10�� 52�н���
////O(n3)���� Ǯ���ߴµ�, 
////https://cagongman.tistory.com/31 �����ϸ� string�� find�Լ��� �̿��Ͽ� O(n2)�� Ǯ������
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
////����: ����Ʈ LV2
////�˰���: �׸��� �˰���
////����: https://m.blog.naver.com/tkddn0928/221790401154
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
//	//���� ���԰��������� �������� ���԰� ��ū���̶����س�����.
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
////����: ���� LV2
////�˰���: �ؽ�(map)
////����: https://seoftware.tistory.com/70
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
//	//�� �������� �з��ؼ� ������ ����.(���������� ���ǰ����� map������)
//	for (vector<string> c : clothes)
//		m[c[1]] += 1;
//
//	map<string, int> ::iterator it;
//	//�Ѱ���� �� ���ϱ�
//	for (it = m.begin(); it != m.end(); it++)
//		answer *= it->second + 1;
//
//	//�ƹ��͵� ���������ʴ� �ϳ��� ��츦���� ����
//	return answer - 1;
//}
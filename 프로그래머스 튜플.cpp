////����: Ʃ�� LV2
////�˰���: �ؽ�
////Ǯ����
//
//#include <string>
//#include <vector>
//#include<map>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//bool cmp(pair<string, int>a, pair<string, int> b) {
//	if (a.second > b.second) return true;
//	return false;
//}
//vector<int> solution(string s) {
//	vector<int> answer;
//	map<string, int> m;
//	//ù��ȣ ������ ��ȣ �����ϰ� Ž��
//	for (int i = 1; i < s.length() - 1; i++) {
//		if (s[i] == '{') {
//			string temp;
//			int j;
//			for (j = i + 1; s[j] != '}'; j++) {
//				if (s[j] == ',') {
//					m[temp] += 1; //��Ű�� ���� �� ����
//					temp = "";
//					continue;
//				}
//				temp += s[j];
//			}
//			m[temp] += 1; //�������κ��� ,�� �� �������Ƿ� +1������Ŵ
//			i = j;
//		}
//	}
//
//	vector<pair<string, int>> vec(m.begin(), m.end()); //���� ���ͷ� �ű�
//	sort(vec.begin(), vec.end(), cmp); //����������������
//
//	for (int i = 0; i < vec.size(); i++) {
//		answer.push_back(stoi(vec[i].first));
//	}
//	return answer;
//}
////���� https://velog.io/@seovalue/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%EC%8B%A4%ED%8C%A8%EC%9C%A8-C-%EC%B9%B4%EC%B9%B4%EC%98%A4-2019-Blind-Recruitment
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
//	//N ������������
//
//	int step = 1; //��������
//	vector<pair<int,double>> vec; //pair�߿�
//	sort(stages.begin(), stages.end());
//	//������������ ���Ϳ� vec���Ϳ�����
//	while (step < N + 1) {
//		int clear = 0; //�ش罺���������� �����ѻ����
//		int challenge = 0; //�ش罺�������� �ưų� �����ϰ��ִ� ���
//		double fault; //������
//		for (int i = 0; i < stages.size(); i++) {
//			if (stages[i] > step)
//				clear++;
//			else if (stages[i] == step) {
//				challenge++;
//				clear++;
//			}
//			//�ش罺�������� ���ų� ������ ����� �ƹ���������, �������� 0
//			if (clear == 0)
//				fault = 0;
//			//������ ���
//			else
//				fault = (double)challenge / clear;
//
//		}
//				//�������� ����
//				vec.push_back({ step,fault });
//				step++;
//				
//					
//
//	}
//	//�Լ��� ��������
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
////sort ���� ���ϴ��Լ� 
//bool paircompare(const pair<int,double> &a, const pair<int, double> &b) {
//	if (a.second > b.second)
//		return true; //true�� ���ļ����� �켱������ ����
//	else if (a.second == b.second) {
//		if (a.first < b.first)
//			return true;
//		else
//			return false; 
//
//	}
//	else return false; //false�� ���� �켱����������
//
//}
//
//int main() {
//
//
//}
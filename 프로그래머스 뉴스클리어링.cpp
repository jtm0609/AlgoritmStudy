////https://unagi44.wordpress.com/2018/03/20/c-%EB%89%B4%EC%8A%A4-%ED%81%B4%EB%9F%AC%EC%8A%A4%ED%84%B0%EB%A7%81%EB%82%9C%EC%9D%B4%EB%8F%84-%EC%A4%91/
////���̵���
//#include <string>
//#include<algorithm>
//#include<iostream>
//#include<map>
//using namespace std;
//
//int solution(string str1, string str2) {
//	int answer = 0;
//	//������ ����, ������ ���� ����
//	double all = 0, dup = 0;
//	map<string, int> map1;
//
//	//�� ���ڿ����� �ҹ��ڷ� ��ȯ
//	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
//	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
//
//	for (int i = 0; i < str1.size() - 1; i++) {
//		//Ư������, ���� ,���ڰ������� �ǳʶ�
//		if (str1[i] < 97 || str1[i] > 122) continue;
//		if (str1[i + 1] < 97 || str1[i + 1] > 122) continue;
//
//		string str;
//		str = str1[i];
//		str += str1[i + 1];
//
//		//������ ������ str1�� ��������
//		all++;
//
//		//�ʿ� Ư�� Ű���ִ��� �˻�, ������ 1 ������ 0����ȯ
//		if (map1.count(str))
//			map1[str]++; //���� Ư�����ڿ�Ű�� ���� ������Ŵ
//		else
//			map1[str] = 1;
//
//	}
//
//	for (int i = 0; i < str2.size() - 1; i++) {
//		//Ư������, ���� ,���ڰ������� �ǳʶ�
//		if (str2[i] < 97 || str2[i] > 122) continue;
//		if (str2[i + 1] < 97 || str2[i + 1] > 122) continue;
//
//		string str;
//		str = str2[i];
//		str += str2[i + 1];
//
//		//str1���� �����ߴ� ���� stringŰ�� �ִٸ�
//		if (map1.count(str)) {
//			//str1�� Ű�� ����Ȱ��� �ִ°��̹Ƿ�, ������ ���� ����
//			if (map1[str] > 0) {
//				map1[str]--;
//				dup++;
//			}
//			//str2�� str1�� �ߺ���Ű�� �� ���Ƽ� �������Ǹ�, ���̻� ����Ȱ��� �ƴϹǷ�, �����հ�������
//			else {
//				all++;
//			}
//		}
//		//����ȿ����̾����� �����հ�������
//		else
//			all++;
//
//	}
//
//
//	//�������� 0�̾ƴϸ�
//	if (all != 0) {
//		answer = 65536 * ((double)dup / all);
//	}
//	else {
//		answer = 65536;
//	}
//	return answer;
//}
//
//int main() {
//	map<string, int> map1;
//	map1["hi"] = 23;
//	map1["hi"] = 24;
//	cout << map1.count("hi2");
//
//}
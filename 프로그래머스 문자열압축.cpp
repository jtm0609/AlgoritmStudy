////����: ���ڿ�����LV2
////�˰���: ����
////http://blog.cmstown.com/2020/02/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4_003/ ���� Ǯ����

//#include <string>
//#include <vector>
//#include <algorithm>
//#include<iostream>
//
//using namespace std;
//
//int solution(string s) {
//	int len = s.length();
//	int answer = len;
//
//	// i = ���ڿ��� �ڸ� ����
//	for (int i = 1; i <= (len / 2); i++) {
//		string result = "";
//		string tmp = s.substr(0, i); // ó�� ���ؾ� �� ���ڿ�
//		int cnt = 1; // ������ ���� ��� 1
//
//		// �ڸ� ���ڿ� ������ŭ �̵��ϸ� ��
//		for (int j = i; j < len; j += i) {
//			// ���� ������ �ִٸ�
//			if (tmp == s.substr(j, i)) {
//				cnt++;
//			}
//			// ���� ������ ���ٸ�
//			else {
//				// ���ݱ��� ������ ������ ���
//				if (cnt == 1) {
//					result += tmp;
//				}
//				// ���ݱ��� ������ �־��� ���
//				else {
//					result += (to_string(cnt) + tmp);
//				}
//
//				tmp = s.substr(j, i);
//				cnt = 1;
//			}
//		}
//
//		result += s.substr((len / i) * i); // ���ڿ��� �ڸ��� ������ ���� �ȵǴ� ���ڿ� �߰�
//		cout << i<<": "<<result<<endl;
//		answer = min(answer, (int)result.length());
//	}
//	return answer;
//}
//
//int main() {
//
//	int ans=solution("aaa");
//	
//	
//	//string str = "aaa";
//	//cout << str.substr(3, 1);
//
//}
////�ܼ����ڿ� ��Ī�˰���
////�ܼ��ϰ� ����츦 ���ϴ� �˰���(��ȿ����)
////ã�����ϴ� ���ڿ����ִ��� Ȯ���ϰ�, ���° �ε������� ��ȯ���ִ� �˰���
//#include<iostream>
//using namespace std;
//
//int findString(string parent, string pattern) {
//	int parrentSize = parent.size();
//	int patternSize = pattern.size();
//	for (int i = 0; i <= parrentSize - patternSize; i++) {
//		bool finded = true;
//		//���ڿ��� ã�°���
//		for (int j = 0; j < patternSize; j++) {
//			if (parent[i + j] != pattern[j]) {
//				finded = false;
//				break;
//			}
//		}
//		//ã�Ҵٸ� �ε�����ȯ
//		if (finded)
//			return i;
//	}
//	//��ã�Ҵٸ� -1��ȯ
//	return -1;
//
//}
//
//int main() {
//	string parent = "Hello World";
//	string pattern = "llo W";
//	int result = findString(parent, pattern);
//	if (result == -1) {
//		cout << "ã���� �����ϴ�.";
//	}
//	else
//		cout << result + 1 << "��°���� ã�ҽ��ϴ�.";
//	return 0;
//}
//���� : ��ȭ��ȣ��� LV2
//�˰���: �ܼ��ݺ�
// O(N2)�� Ǯ������ ,phone_book�� ���Ľ�Ű���ϸ�. O(N)���� Ǯ������ https://rile1036.tistory.com/5

#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	int idx;
	for (int i = 0; i < phone_book.size(); i++) {
		string str = phone_book[i];
		for (int j = 0; j < phone_book.size(); j++) {
			if (i == j) continue;
			idx = str.find(phone_book[j]);
			//���ڿ��� �����鼭, ���λ��̸� 
			if (idx != -1 && idx == 0) return false;

		}
	}
	return true;
}
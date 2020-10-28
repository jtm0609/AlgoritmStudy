//문제 : 전화번호목록 LV2
//알고리즘: 단순반복
// O(N2)로 풀었지만 ,phone_book를 정렬시키고하면. O(N)으로 풀수있음 https://rile1036.tistory.com/5

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
			//문자열이 있으면서, 접두사이면 
			if (idx != -1 && idx == 0) return false;

		}
	}
	return true;
}
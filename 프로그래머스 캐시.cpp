////Ʋ��
////https://greenapple16.tistory.com/87 ��Ǯ�̶� �������
//
//#include <string>
//#include <vector>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//// cache hit : �����Ϸ��� �����Ͱ� ĳ�ÿ� ������ �� �ش� ĳ�ø� ��ȸ�ϴ� �� Cache hit �̶� �Ѵ�.
//// cache miss : �����Ϸ��� �����Ͱ� ĳ�ÿ� ���� ���� �ʴ� ���
//
//int solution(int cacheSize, vector<string> cities) {
//	if (cacheSize == 0)
//		return cities.size() * 5;
//	vector<string> cache;
//	int answer = 0;
//
//
//
//	for (int i = 0; i < cities.size(); i++) {
//		int j = 0;
//		transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
//		//ĳ�ÿ�����
//		for (j = 0; j < cache.size(); j++) {
//
//			if (cities[i] == cache[j]) {
//
//				cache.erase(cache.begin() + j);
//				cache.push_back(cities[i]);
//				answer += 1;
//				break;
//			}
//		}
//
//		//ĳ�ÿ�����
//		if (j == cache.size()) {
//			if (cache.size() < cacheSize) {
//				cache.push_back(cities[i]);
//
//			}
//			else {
//				cache.erase(cache.begin());
//				cache.push_back(cities[i]);
//
//			}
//			answer += 5;
//		}
//
//
//	}
//
//
//
//	return answer;
//}
//int main() {
//	vector<string> sample;
//	sample.push_back("AbCd");
//	sample.push_back("BAcd");
//
//	for (int i = 0; i < sample.size(); i++) {
//		//������ ���� �ҹ��ڷκ���
//		transform(sample[i].begin(), sample[i].end(), sample[i].begin(), tolower);
//	}
//
//	cout << sample[1];
//
//}

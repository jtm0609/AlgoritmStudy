////틀림
////https://greenapple16.tistory.com/87 내풀이랑 비슷햇음
//
//#include <string>
//#include <vector>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//// cache hit : 참조하려는 데이터가 캐시에 존재할 때 해당 캐시를 조회하는 걸 Cache hit 이라 한다.
//// cache miss : 참조하려는 데이터가 캐시에 존재 하지 않는 경우
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
//		//캐시에있음
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
//		//캐시에없음
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
//		//벡터의 값을 소문자로변경
//		transform(sample[i].begin(), sample[i].end(), sample[i].begin(), tolower);
//	}
//
//	cout << sample[1];
//
//}

////단순문자열 매칭알고리즘
////단순하게 모든경우를 비교하는 알고리즘(비효율적)
////찾고자하는 문자열이있는지 확인하고, 몇번째 인덱스에서 반환해주는 알고리즘
//#include<iostream>
//using namespace std;
//
//int findString(string parent, string pattern) {
//	int parrentSize = parent.size();
//	int patternSize = pattern.size();
//	for (int i = 0; i <= parrentSize - patternSize; i++) {
//		bool finded = true;
//		//문자열을 찾는과정
//		for (int j = 0; j < patternSize; j++) {
//			if (parent[i + j] != pattern[j]) {
//				finded = false;
//				break;
//			}
//		}
//		//찾았다면 인덱스반환
//		if (finded)
//			return i;
//	}
//	//못찾았다면 -1반환
//	return -1;
//
//}
//
//int main() {
//	string parent = "Hello World";
//	string pattern = "llo W";
//	int result = findString(parent, pattern);
//	if (result == -1) {
//		cout << "찾을수 없습니다.";
//	}
//	else
//		cout << result + 1 << "번째에서 찾았습니다.";
//	return 0;
//}
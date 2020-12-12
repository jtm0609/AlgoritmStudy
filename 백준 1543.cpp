////문제 : 문서검색
////알고리즘: 문자열, 완전탐색
////참고: https://jow1025.tistory.com/82#recentEntries
//
//#include<iostream>
//
//#include<string>
//using namespace std;
//string text, find_text;
//
//int main() {
//	int cnt = 0;
//	getline(cin, text);
//	getline(cin, find_text);
//
//	if (text.size() < find_text.size()) {
//		cout << "0";
//		return 0;
//	}
//	
//
//	for (int i = 0; i <= text.size() - find_text.size();) {
//		bool check = true;
//		for (int j = 0; j < find_text.size(); j++) {
//			if (text[i + j] != find_text[j]) {
//				check = false;
//				break;
//			}
//		}
//		if (check) {
//			cnt++;
//			i += find_text.size();
//		}
//		else i++;
//
//	}
//	cout << cnt;
//}
//

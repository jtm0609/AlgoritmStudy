////문제: 문자열압축LV2
////알고리즘: 구현
////http://blog.cmstown.com/2020/02/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4_003/ 보고 풀었음

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
//	// i = 문자열을 자를 단위
//	for (int i = 1; i <= (len / 2); i++) {
//		string result = "";
//		string tmp = s.substr(0, i); // 처음 비교해야 될 문자열
//		int cnt = 1; // 압축이 없을 경우 1
//
//		// 자를 문자열 단위만큼 이동하며 비교
//		for (int j = i; j < len; j += i) {
//			// 현재 압축이 있다면
//			if (tmp == s.substr(j, i)) {
//				cnt++;
//			}
//			// 현재 압축이 없다면
//			else {
//				// 지금까지 압축이 없었을 경우
//				if (cnt == 1) {
//					result += tmp;
//				}
//				// 지금까지 압축이 있었을 경우
//				else {
//					result += (to_string(cnt) + tmp);
//				}
//
//				tmp = s.substr(j, i);
//				cnt = 1;
//			}
//		}
//
//		result += s.substr((len / i) * i); // 문자열을 자르는 단위에 포함 안되는 문자열 추가
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
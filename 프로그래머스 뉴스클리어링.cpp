////https://unagi44.wordpress.com/2018/03/20/c-%EB%89%B4%EC%8A%A4-%ED%81%B4%EB%9F%AC%EC%8A%A4%ED%84%B0%EB%A7%81%EB%82%9C%EC%9D%B4%EB%8F%84-%EC%A4%91/
////난이도중
//#include <string>
//#include<algorithm>
//#include<iostream>
//#include<map>
//using namespace std;
//
//int solution(string str1, string str2) {
//	int answer = 0;
//	//합집합 개수, 교집합 개수 정의
//	double all = 0, dup = 0;
//	map<string, int> map1;
//
//	//각 문자열들을 소문자로 변환
//	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
//	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
//
//	for (int i = 0; i < str1.size() - 1; i++) {
//		//특수문자, 공백 ,숫자가나오면 건너뜀
//		if (str1[i] < 97 || str1[i] > 122) continue;
//		if (str1[i + 1] < 97 || str1[i + 1] > 122) continue;
//
//		string str;
//		str = str1[i];
//		str += str1[i + 1];
//
//		//합집합 기준을 str1를 기준으로
//		all++;
//
//		//맵에 특정 키가있는지 검사, 있으면 1 없으면 0을반환
//		if (map1.count(str))
//			map1[str]++; //맵의 특정문자열키의 값을 증가시킴
//		else
//			map1[str] = 1;
//
//	}
//
//	for (int i = 0; i < str2.size() - 1; i++) {
//		//특수문자, 공백 ,숫자가나오면 건너뜀
//		if (str2[i] < 97 || str2[i] > 122) continue;
//		if (str2[i + 1] < 97 || str2[i + 1] > 122) continue;
//
//		string str;
//		str = str2[i];
//		str += str2[i + 1];
//
//		//str1에서 저장했던 맵의 string키가 있다면
//		if (map1.count(str)) {
//			//str1의 키와 공통된것이 있는것이므로, 교집합 개수 증가
//			if (map1[str] > 0) {
//				map1[str]--;
//				dup++;
//			}
//			//str2에 str1의 중복된키가 더 많아서 음수가되면, 더이상 공통된것이 아니므로, 합집합개수증가
//			else {
//				all++;
//			}
//		}
//		//공통된영역이없으면 합집합개수증가
//		else
//			all++;
//
//	}
//
//
//	//합집합이 0이아니면
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
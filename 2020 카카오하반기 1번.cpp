//#include <string>
//#include <vector>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
//string solution(string new_id) {
//	string answer = "";
//
//	//1단계: 소문자로 치환
//	transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
//
//	//2단계: 특수문자제거(-,_,.제외)
//	for (int i = 0; i < new_id.size(); i++) {
//		if ((new_id[i] >= '0' && new_id[i] <= '9')
//			|| (new_id[i] >= 'a' && new_id[i] <= 'z')
//			|| (new_id[i] == '.' || new_id[i] == '-' || new_id[i] == '_')) {
//			answer += new_id[i];
//
//		}
//	}
//
//	//3단계
//	for (int i = 0; i < answer.size() - 1; i++) {
//		if (answer[i] == '\.' && answer[i + 1] == '\.') {
//			answer.erase(answer.begin() + i + 1);
//			i--;
//		}
//	}
//
//	//4단계
//	while (answer[0] == '\.' || answer[answer.size() - 1] == '\.') {
//		if (answer[0] == '\.')
//			answer.erase(answer.begin() + 0);
//		if (answer[answer.size() - 1] == '\.')
//			answer.erase(answer.begin() + answer.size() - 1);
//	}
//
//	//5단계
//	if (answer.size() == 0)
//		answer += "a";
//
//	//6단계
//	if (answer.size() >= 16) {
//		answer.erase(answer.begin() + 15, answer.end());
//		while (answer[answer.size() - 1] == '\.')
//			answer.erase(answer.begin() + answer.size() - 1);
//
//
//	}
//
//	//7단계
//	if (answer.size() <= 2) {
//		char temp = answer[answer.size() - 1];
//		while (answer.size() < 3) {
//			answer += temp;
//		}
//	}
//
//
//
//
//
//
//
//
//
//	return answer;
//}
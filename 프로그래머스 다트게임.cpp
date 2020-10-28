//#include <string>
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//int solution(string dartResult) {
//	int answer = 0;
//	vector<int> dart_score(3);//각 기회당 점수
//	int cnt = -1; //각 기회당 점수를 위한 벡터인덱스
//
//	for (int i = 0; i < dartResult.length(); i++) {
//
//		if (dartResult[i] == 'S') {
//			cnt++;
//			//'0'을 뺴주는이유는 char형을 -> int형으로 바꾸기위해
//			dart_score[cnt] = dartResult[i - 1] - '0';
//
//			//score가 10일경우
//			if ((dartResult[i - 1] == '0') && (dartResult[i - 2] == '1'))
//				dart_score[cnt] = 10;
//
//
//
//		}
//		else if (dartResult[i] == 'D') {
//			cnt++;
//			//제곱
//			dart_score[cnt] = pow(dartResult[i - 1] - '0', 2);
//
//			//score가 10일경우
//			if ((dartResult[i - 1] == '0') && (dartResult[i - 2] == '1'))
//				dart_score[cnt] = pow(10, 2);
//
//		}
//		else if (dartResult[i] == 'T') {
//			cnt++;
//			//세제곱
//			dart_score[cnt] = pow(dartResult[i - 1] - '0', 3);
//
//			//score가 10일경우
//			if ((dartResult[i - 1] == '0') && (dartResult[i - 2] == '1'))
//				dart_score[cnt] = pow(10, 3);
//
//		}
//
//		//옵션(*,#) 검사
//		if (dartResult[i] == '*') {
//			if (cnt > 0) {
//				dart_score[cnt - 1] *= 2;
//			}
//			dart_score[cnt] *= 2;
//		}
//		else if (dartResult[i] == '#') {
//			dart_score[cnt] *= -1;
//		}
//
//	}
//
//	answer = dart_score[0] + dart_score[1] + dart_score[2];
//	return answer;
//}
//
//
//int main() {
//	vector<int> dart_score(3);
//	cout << dart_score[0];
//	return 0;
//}
////문제: 괄호변환 LV2
////알고리즘: 시뮬레이션+ 문자열
////https://mungto.tistory.com/42 참고했음
//
//#include <string>
//using namespace std;
////올바른 문자열인지 확인
//bool check(string p) {
//	int t = 0;
//	for (size_t i = 0; i < p.length(); i++) {
//		if (p[i] == '(')       t++;
//		else if (p[i] == ')') t--;
//
//		//괄호가 맞지 않음
//		if (t < 0)     return false;
//
//	}
//
//	return true;
//}
//
//string recursion(string p) {
//	//재귀조건 비여있다면 비여있는걸 리턴
//	if (p == "")    return p;
//	string u, v;
//	int Lcount = 0, Rcount = 0;
//	for (int i = 0; i < p.length(); i++) {
//		if (p[i] == '(')     Lcount++;
//		else        Rcount++;
//		//균형잡힌 문자열이 되었다면 분리
//		if (Lcount == Rcount) {
//			u = p.substr(0, i + 1);
//			v = p.substr(i + 1);
//			break;
//		}
//	}
//	//u가 올바른 문자열이면 v처리후 u에 붙여서 반환
//	if (check(u))     return u + recursion(v);
//	//u가 올바른 문자열이 아니라면
//	else {
//		//빈 문자열에 "("을 붙인다
//		string temp{ "(" };
//		//v를 재귀수행후 ")"를 붙인다
//		temp += recursion(v) + ")";
//		//u의  제일앞과 마지막 문자를 제거
//		u = u.substr(1, u.length() - 2);
//		//문자열 괄호 변경
//		for (int i = 0; i < u.length(); i++) {
//			if (u[i] == '(')    temp += ')';
//			else    temp += '(';
//		}
//		return temp;
//	}
//}
//
//string solution(string p) {
//	//처음검사했을때 맞았다면
//	if (check(p))     return p;
//	return recursion(p);
//}
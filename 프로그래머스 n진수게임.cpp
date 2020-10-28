////https://twoearth.tistory.com/13
////틀림
//#include <string>
//#include <vector>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
////n진수로 바꿔주는 함수
//string nNum(int x, int n) { //x:숫자 , n:진법
//	char c[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }; 
//	
//	string A = "";
//	//몫이 0이될때까지
//	while (x / n != 0) {
//		int a = 0;
//		a = x % n;
//		//나머지가 a일때 a번째 숫자 c[a]를 앞에 계속추가한다.(나머지들의 역순이므로)
//		A = c[a] + A; 
//		x = x / n;
//	}
//	//몫이 0일때 마지막 나머지를 추가한다.
//	A = c[x % n] + A;
//
//	return A;
//}
//
//string solution(int n, int t, int m, int p) {
//	string answer = "";
//	string s = "";
//	for (int i = 0; i < t * m; i++) {
//		s += nNum(i, n); //s라는 string에 n진법으로 바꾼수를 뒤에 추가한다.
//	}
//
//	//처음순서
//	int q = p - 1;
//	for (int i = 0; i < t; i++) {
//		answer += s[q];
//		q += m;
//	}
//	return answer;
//}
//int main() {
//
//	string str;
//	cout << to_string(10);
//}
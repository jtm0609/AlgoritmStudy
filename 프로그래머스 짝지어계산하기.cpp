////문제: 짝지어제거하기 
////알고리즘 :스택
////참고: https://jyukki97.github.io/blog/2019-12-31-removemating/
//
//#include <iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//int solution(string s)
//{
//	stack<char> stack;
//	int answer = 0;
//	stack.push(s[0]);
//	for (int i = 1; i < s.size(); i++) {
//		if (stack.empty() || stack.top() != s[i]) stack.push(s[i]);
//		else if (stack.top() == s[i]) stack.pop();
//
//	}
//
//	if (stack.empty()) return 1;
//	return answer;
//}
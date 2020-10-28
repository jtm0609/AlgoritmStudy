//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//string toBinary(int decimal, int n);
//vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
//	vector<string> answer;
//	string arr_str;
//	for (int i = 0; i < n; i++) {
//		//배열 1,2를 비트연산한다.
//		int arr12 = (arr1[i] | arr2[i]);
//		printf("%d\n", arr12);
//
//		//10진수를 2진수로바꾼다
//		arr_str = toBinary(arr12, n);
//		answer.push_back(arr_str);
//	
//		//리버스를 해준다. 왜인지는 잘모르겠음
//		reverse(answer[i].begin(), answer[i].end());
//
//	}
//
//
//	return answer;
//}
//
////10진수->2진수
//string toBinary(int decimal, int n) {
//	string str = "";
//	for (int i = 0; i < n; i++) {
//		if (decimal % 2 == 1) {
//			str += "#";
//		}
//		else {
//			str += " ";
//		}
//		decimal /= 2;
//	}
//	return str;
//}
//
//int main() {
//	printf("%d", 9 | 30);
//
//}
//

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
//		//�迭 1,2�� ��Ʈ�����Ѵ�.
//		int arr12 = (arr1[i] | arr2[i]);
//		printf("%d\n", arr12);
//
//		//10������ 2�����ιٲ۴�
//		arr_str = toBinary(arr12, n);
//		answer.push_back(arr_str);
//	
//		//�������� ���ش�. �������� �߸𸣰���
//		reverse(answer[i].begin(), answer[i].end());
//
//	}
//
//
//	return answer;
//}
//
////10����->2����
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

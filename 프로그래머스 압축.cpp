////����: ����
////�˰���: �ؽ�(MAP)+����
////����: https://intaehwang.tistory.com/5
//#include <string>
//#include <vector>
//#include<map>
//#include<iostream>
//
//using namespace std;
//
//vector<int> solution(string msg) {
//	vector<int> answer;
//	map<string, int> dic;
//	dic.insert(make_pair("A", 1)); dic.insert(make_pair("B", 2));
//	dic.insert(make_pair("C", 3)); dic.insert(make_pair("D", 4));
//	dic.insert(make_pair("E", 5)); dic.insert(make_pair("F", 6));
//	dic.insert(make_pair("G", 7)); dic.insert(make_pair("H", 8));
//	dic.insert(make_pair("I", 9)); dic.insert(make_pair("J", 10));
//	dic.insert(make_pair("K", 11)); dic.insert(make_pair("L", 12));
//	dic.insert(make_pair("M", 13)); dic.insert(make_pair("N", 14));
//	dic.insert(make_pair("O", 15)); dic.insert(make_pair("P", 16));
//	dic.insert(make_pair("Q", 17)); dic.insert(make_pair("R", 18));
//	dic.insert(make_pair("S", 19)); dic.insert(make_pair("T", 20));
//	dic.insert(make_pair("U", 21)); dic.insert(make_pair("V", 22));
//	dic.insert(make_pair("W", 23)); dic.insert(make_pair("X", 24));
//	dic.insert(make_pair("Y", 25)); dic.insert(make_pair("Z", 26));
//
//	int idx = 27;
//	int index = 0;
//	//���� �� ���ڿ� ã��
//	while (index != msg.size()) {
//		string input = "";
//		char now = msg[index];
//		input += now;
//		char next = msg[index + 1];
//		//���� ���ڰ� ���Ե� ���ڿ��� ���� ��
//		if (dic.find(input + next) == dic.end()) {
//			answer.push_back(dic.find(input)->second);
//			dic.insert(make_pair(input + next, idx));
//			idx += 1;
//		}
//
//		//���� ���ڰ� ���Ե� ���ڿ��� ������, ���� ���ڸ� �߰�
//		else {
//			while (dic.find(input + next) != dic.end()) {
//				input += next;
//				//now
//				index += 1;
//				next = msg[index+1];
//			}
//			answer.push_back(dic.find(input)->second);
//			dic.insert(make_pair(input + next, idx));
//			idx += 1;
//		}
//		index += 1;
//	}
//
//
//	return answer;
//}
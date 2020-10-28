////맞은듯?
//#include <string>
//#include <vector>
//#include<iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> ball, vector<int> order) {
//	vector<int> answer;
//	vector<int> vec;
//
//	int temp;
//	int order_num = 0;
//
//	while (ball.size() != 0) {
//
//		if (order_num < order.size()) {
//			temp = order[order_num];
//			vec.push_back(temp);
//		}
//
//		for (int i = 0; i < ball.size(); i++) {
//
//			for (int j = 0; j < vec.size(); j++) {
//				if (ball[0] == vec[j]) {
//
//					answer.push_back(vec[j]);
//					vec.erase(vec.begin() + j);
//					ball.erase(ball.begin() + 0);
//
//					break;
//				}
//				else if (ball[ball.size() - 1] == vec[j]) {
//
//					answer.push_back(vec[j]);
//					vec.erase(vec.begin() + j);
//					ball.erase(ball.begin() + ball.size() - 1);
//					break;
//				}
//			}
//
//
//
//
//
//
//		}
//		order_num++;
//	}
//	return answer;
//}
//int main() {
//	vector<int> ball{ 11, 2, 9, 13, 24 };
//	vector<int> order{ 9, 2, 13, 24, 11 };
//	//solution(ball, order);
//
//	int pos[4][4] = { {-1,0},{1,0},{0,-1} ,{0,1} }; //상, 하, 좌, 우
//	cout << pos[3][1];
//}
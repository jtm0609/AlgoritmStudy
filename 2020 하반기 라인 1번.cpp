//¸ÂÀºµí?
//#include <string>
//#include <vector>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//void change(vector<vector<int>>& vec, int i0, int i1, int j0, int j1) {
//	int temp;
//	temp = vec[i0][i1];
//	vec[i0][i1] = vec[j0][j1];
//	vec[j0][j1] = temp;
//
//
//}
//
//int solution(vector<vector<int>> boxes) {
//	int answer = 0;
//
//
//	for (int i = 0; i < boxes.size(); i++) {
//
//		if (boxes[i][0] == boxes[i][1])
//			continue;
//		for (int j = 0; j < boxes.size(); j++) {
//			if (i == j)
//				continue;
//
//			if (boxes[i][0] == boxes[j][0])
//				change(boxes, i, 0, j, 1);
//
//
//			else if (boxes[i][0] == boxes[j][1])
//				change(boxes, i, 0, j, 0);
//
//
//			if (boxes[i][0] == boxes[i][1])
//				break;
//
//
//			if (boxes[i][1] == boxes[j][0])
//				change(boxes, i, 1, j, 1);
//
//			else if (boxes[i][1] == boxes[j][1])
//				change(boxes, i, 1, j, 0);
//
//			if (boxes[i][0] == boxes[i][1])
//				break;
//
//
//		}
//
//
//	}
//
//	for (int i = 0; i < boxes.size(); i++) {
//		cout << boxes[i][0] << ", " << boxes[i][1] << endl;
//		if (boxes[i][0] != boxes[i][1])
//			answer++;
//	}
//	return answer;
//
//}
//int main() {
//
//	vector<vector<int>> test(10);
//	test[0].push_back(1);
//	test[0].push_back(2);
//	test[1].push_back(2);
//	test[1].push_back(1);
//
//	change(test, 0, 1, 1, 1);
//	for (int i = 0; i < 2; i++) {
//		cout << test[i][0] << ", " << test[i][1]<<endl;
//	}
//
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	cout << q.front()+1;
//	cout << q.front() + 2;
//	cout << q.front() + 3 << endl;
//	for (int i = q.front(); i < q.size(); i++) {
//		cout << i;
//	}
//
//}
////https://hwan-shell.tistory.com/m/172 참조
////틀림
////난이도 상
//
//#include <string>
//#include <vector>
//#include<iostream>
//
//using namespace std;
//
//int solution(int m, int n, vector<string> board) {
//	int answer = 0;
//
//	//같은 블록이 4개가 모였는지 확인하는 flag
//	bool flag = true;
//
//	
//	while (true) {
//		flag = false;
//		//배열의 [1][0]을 기준으로 잡아서 같은 블록4개를 찾음
//		for (int i = 1; i < board.size(); i++) {
//			for (int j = 0; j < board[i].size() - 1; j++) {
//				//조건
//				//4개 블록이 같다면 4개블록모두 소문자로바꿈
//				//다음 while문에서 비교할때, 소문자와 대문자를 같은녀석으로 보고 비교
//				if (board[i][j] != ' ' &&
//					(tolower(board[i][j]) == tolower(board[i - 1][j])) &&
//					(tolower(board[i][j]) == tolower(board[i][j + 1])) &&
//					(tolower(board[i][j]) == tolower(board[i - 1][j + 1]))) {
//					board[i][j] = tolower(board[i][j]);
//					board[i - 1][j] = board[i][j];
//					board[i][j + 1] = board[i][j];
//					board[i - 1][j + 1] = board[i][j];
//					flag = true;
//				}
//			}
//		}
//		//같은 4개 블록이없다면 탈출
//		if (flag == false)
//			break;
//
//		//전체 프렌즈블록에서 소문자를 찾음, 소문자의개수가 즉 블록이 삭제된개수임
//		//발견하면 공백으로 처리
//		for (int i = 0; i < board.size(); i++) {
//			for (int j = 0; j < board[i].size(); j++) {
//				if (board[i][j] >= 'a' && board[i][j] <= 'z') {
//					board[i][j] = ' ';
//					answer++;
//				}
//			}
//		}
//
//		//성능처리를 위해 행을 거꾸로부터시작하고, 열을 0부터 시작함
//		//공백을 찾으면 그 위의 행인 공백이 아니면 위치를 바꾸어줌, 
//		//그위의 행이 공백이면 반복문을 통해 공백이아닌 프렌즈가있는 행을 찾고 위치를 바꾸어줌
//		for (int i = board.size() - 1; i >= 0; i--) {
//			for (int j = 0; j < board[i].size(); j++) {
//				if (board[i][j] == ' ') {
//					for (int z = i - 1; z >= 0; z--) {
//						if (board[z][j] != ' ') {
//							board[i][j] = board[z][j];
//							board[z][j] = ' ';
//							break;
//						}
//					}
//				}
//			}
//		}
//	}
//	return answer;
//}
//
//int main() {
//	vector<int> test = { 1,2,3 };
//	test.erase(test.begin()+0);
//
//	cout << test[0]<<endl;
//	cout << test.size();
//}
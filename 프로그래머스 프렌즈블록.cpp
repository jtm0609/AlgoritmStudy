////https://hwan-shell.tistory.com/m/172 ����
////Ʋ��
////���̵� ��
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
//	//���� ����� 4���� �𿴴��� Ȯ���ϴ� flag
//	bool flag = true;
//
//	
//	while (true) {
//		flag = false;
//		//�迭�� [1][0]�� �������� ��Ƽ� ���� ���4���� ã��
//		for (int i = 1; i < board.size(); i++) {
//			for (int j = 0; j < board[i].size() - 1; j++) {
//				//����
//				//4�� ����� ���ٸ� 4����ϸ�� �ҹ��ڷιٲ�
//				//���� while������ ���Ҷ�, �ҹ��ڿ� �빮�ڸ� �����༮���� ���� ��
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
//		//���� 4�� ����̾��ٸ� Ż��
//		if (flag == false)
//			break;
//
//		//��ü �������Ͽ��� �ҹ��ڸ� ã��, �ҹ����ǰ����� �� ����� �����Ȱ�����
//		//�߰��ϸ� �������� ó��
//		for (int i = 0; i < board.size(); i++) {
//			for (int j = 0; j < board[i].size(); j++) {
//				if (board[i][j] >= 'a' && board[i][j] <= 'z') {
//					board[i][j] = ' ';
//					answer++;
//				}
//			}
//		}
//
//		//����ó���� ���� ���� �Ųٷκ��ͽ����ϰ�, ���� 0���� ������
//		//������ ã���� �� ���� ���� ������ �ƴϸ� ��ġ�� �ٲپ���, 
//		//������ ���� �����̸� �ݺ����� ���� �����̾ƴ� ������ִ� ���� ã�� ��ġ�� �ٲپ���
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
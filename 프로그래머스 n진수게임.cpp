////https://twoearth.tistory.com/13
////Ʋ��
//#include <string>
//#include <vector>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
////n������ �ٲ��ִ� �Լ�
//string nNum(int x, int n) { //x:���� , n:����
//	char c[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }; 
//	
//	string A = "";
//	//���� 0�̵ɶ�����
//	while (x / n != 0) {
//		int a = 0;
//		a = x % n;
//		//�������� a�϶� a��° ���� c[a]�� �տ� ����߰��Ѵ�.(���������� �����̹Ƿ�)
//		A = c[a] + A; 
//		x = x / n;
//	}
//	//���� 0�϶� ������ �������� �߰��Ѵ�.
//	A = c[x % n] + A;
//
//	return A;
//}
//
//string solution(int n, int t, int m, int p) {
//	string answer = "";
//	string s = "";
//	for (int i = 0; i < t * m; i++) {
//		s += nNum(i, n); //s��� string�� n�������� �ٲۼ��� �ڿ� �߰��Ѵ�.
//	}
//
//	//ó������
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
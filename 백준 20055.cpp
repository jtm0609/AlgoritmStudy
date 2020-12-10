//����: �����̳������κ� (�ǹ�1)
//�˰���: ����
//����: https://yjyoon-dev.github.io/boj/2020/10/19/boj-20055/

#include<iostream>
using namespace std;

int N, K, T; //����, ����, �ܰ�
int A[201];
bool upperBelt[101]; //���� ��Ʈ�� �κ� ���� ����

//�κ�ȸ��
void rotateBelt() {	
	for (int i = N - 1; i > 0; i--) {
		//�κ����ִٸ� ȸ��
		if (upperBelt[i]) {
			upperBelt[i + 1] = true;
			upperBelt[i] = false;
		}
	}
	upperBelt[N] = false;

	//������ ȸ��
	int temp = A[2 * N];
	for (int i = 2 * N; i > 1; i--) {
		A[i] = A[i-1];
	}
	A[1] = temp;
}

//�κ� �̵�
void moveRobot() {
	for (int i = N-1; i > 0; i--) {
		if (upperBelt[i] && !upperBelt[i + 1] && A[i + 1] > 0) {
			upperBelt[i + 1] = true;
			upperBelt[i] = false;
			A[i + 1]--;
		}
	}
	upperBelt[N] = false;
}

//������ �˻�
int countZeroA() {
	int ret = 0;
	for (int i = 1; i <= 2 * N; i++) {
		if (A[i] == 0) ret++;
	}
	return ret;
}
int main() {
	cin >> N >> K;
	for (int i = 1; i <= 2 * N; i++)
		cin >> A[i];
	//�ܰ�
	T = 1;
	while (1) {
		
		rotateBelt(); //��Ʈ ȸ��
		moveRobot(); //�κ� �̵�
		//ùĭ�� �κ��̾���, �������� 1�̻��̶�� �κ��ø���
		if (!upperBelt[1] && A[1] > 0) {
			upperBelt[1] = true;
			A[1]--;
		}

		//��������
		if (countZeroA() >= K) break;
		T++;
	}

	cout << T;
}
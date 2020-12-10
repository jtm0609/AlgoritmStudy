//문제: 컨테이너위에로봇 (실버1)
//알고리즘: 구현
//참고: https://yjyoon-dev.github.io/boj/2020/10/19/boj-20055/

#include<iostream>
using namespace std;

int N, K, T; //길이, 조건, 단계
int A[201];
bool upperBelt[101]; //윗쪽 벨트의 로봇 존재 여부

//로봇회전
void rotateBelt() {	
	for (int i = N - 1; i > 0; i--) {
		//로봇이있다면 회전
		if (upperBelt[i]) {
			upperBelt[i + 1] = true;
			upperBelt[i] = false;
		}
	}
	upperBelt[N] = false;

	//내구도 회전
	int temp = A[2 * N];
	for (int i = 2 * N; i > 1; i--) {
		A[i] = A[i-1];
	}
	A[1] = temp;
}

//로봇 이동
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

//내구도 검사
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
	//단계
	T = 1;
	while (1) {
		
		rotateBelt(); //벨트 회전
		moveRobot(); //로봇 이동
		//첫칸에 로봇이없고, 내구도가 1이상이라면 로봇올리기
		if (!upperBelt[1] && A[1] > 0) {
			upperBelt[1] = true;
			A[1]--;
		}

		//종료조건
		if (countZeroA() >= K) break;
		T++;
	}

	cout << T;
}
////문제: 연산자 끼워넣기
////알고리즘: 브루트포스 + 백트래킹
//
//#include<iostream>
//using namespace std;
//
//int n;
//int num[11]; //수열
//int operators[4]; //연산자개수
//int mymin = 1000000000;
//int mymax = -1000000000;
//void solve(int result,int idx) {
//	//최댓값 비교
//	if (idx == n) {
//		if (result > mymax)
//			mymax = result;
//		if (result < mymin)
//			mymin = result;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		//연산자 개수검사
//		if (operators[i] > 0) {
//			//연산자 하나 사용했으므로 1개 줄여줌
//			operators[i]--;
//			//덧셈
//			if (i == 0)
//				solve(result + num[idx], idx + 1);
//			//뺄셈
//			else if (i == 1)
//				solve(result - num[idx], idx + 1);
//			//곱셈
//			else if (i == 2)
//				solve(result * num[idx], idx + 1);
//			//나눗셈
//			else if (i == 3)
//				solve(result / num[idx], idx + 1);
//
//			//백트래킹: 다른연산자를 사용할 것이므로 아까 줄였던 연산자 개수를 늘려줌
//			operators[i]++;
//		}
//	}
//	
//		
//	
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) 
//		cin >> num[i];
//
//	for (int i = 0; i < 4; i++)
//		cin >> operators[i];
//
//
//		solve(num[0], 1);
//		cout << mymax<<endl;
//		cout << mymin;
//	
//}
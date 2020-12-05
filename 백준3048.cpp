////문제: 개미
////문제설명:
////알고리즘: 구현
////풀이과정
////1. 개미의 구조체를 정의하고, 각 개미에대한 방향과(0,1) 알파벳을저장
////2. 반복문으로 방향을 비교하면서 방향이 다르면 스왑해줌, 단 앞의방향은 0
////참고: https://j2wooooo.tistory.com/132
//#include<iostream>
//using namespace std;
//struct Ant {
//	int dir;
//	char alpha;
//};
//int N1, N2,T;
////알파벳 27개
//Ant ant[27];
//int main() {
//	
//	cin >> N1 >> N2;
//	char alpha;
//	for (int i = 0; i < N1; i++) {
//		cin >> alpha;
//		ant[N1 - 1 - i] = { 0,alpha };
//	}
//
//	for (int i = 0; i < N2; i++) {
//		cin >> alpha;
//		ant[N1 + i] = { 1,alpha };
//	}
//
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		for (int j = 0; j < N1 + N2 - 1; j++) {
//			if ((ant[j].dir != ant[j + 1].dir && ant[j].dir == 0)) {
//				Ant temp = ant[j];
//				ant[j] = ant[j + 1];
//				ant[j + 1] = temp;
//				j++;
//			}
//		}
//	}
//
//	for (int i = 0; i < N1 + N2; i++) {
//		cout << ant[i].alpha;
//	}
//}
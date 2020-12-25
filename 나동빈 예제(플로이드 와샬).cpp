////플로이드 와샬 알고리즘
////모든 정점에서 모든정점으로의 최단 경로 구하기
//
//#include<iostream>
//using namespace std;
//int INF = 10000000;
//
////자료 배열을 초기화
//int a[4][4] = {
//	{0, 5, INF, 8},
//	{7, 0, 9 ,INF},
//	{2, INF, 0, 4},
//	{INF, INF,3, 0}
//};
//
//void floyWarshall() {
//	//결과 그래프를 초기화합니다.
//	int number = 4;
//	int d[4][4];
//
//	//결과 그래프를 초기화합니다.
//	for (int i = 0; i < number; i++) {
//		for (int j = 0; j < number; j++) {
//			d[i][j] = a[i][j];
//		}
//	}
//
//	// k = 거쳐가는 노드
//	for (int k = 0; k < number; k++) {
//		// i = 출발 노드
//		for (int i = 0; i < number; i++) {
//			// j= 도착 노드
//			for (int j = 0; j < number; j++) {
//				//출발노드(i)에서 k를 거쳐서 도착노드(j)로가는경우가 , 그냥 출발노드(i)에서 도착노드(j)로가는경우보다 작다면
//				if (d[i][k] + d[k][j] < d[i][j]) {
//					d[i][j] = d[i][k] + d[k][j];
//				}
//			}
//		}
//	}
//
//	//결과출력
//	for (int i = 0; i < number; i++) {
//		for (int j = 0; j < number; j++) {
//			cout << d[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//}
//
//int main() {
//	floyWarshall();
//}
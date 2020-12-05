////문제: 운동 LV브론즈2
////알고리즘: 구현
//
//#include<iostream>
//using namespace std;
//
////운동횟수,최소맥박수,최대맥박수, (운동시)맥박의증가수, (휴식시)맥박의감소수
//int N, m, M, T, R;
//int cur_m;
//int cur_n;
//int time;
//int main() {
//	cin >> N >> m >> M >> T >> R;
//	cur_m = m;
//
//	//운동을 못할경우
//	if ((m + T > M)) {
//		cout << -1;
//		return 0;
//	}
//
//	while (cur_n<N) {
//		time++;
//		//운동가능
//		if (cur_m + T <= M) {
//			cur_n++;
//			cur_m = cur_m + T;
//		}
//		//휴식필요
//		else {
//			if (cur_m - R < m) {
//				cur_m = m;
//				continue;
//			}
//			cur_m = cur_m - R;
//		}
//	}
//	cout << time;
//}
//

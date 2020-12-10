////문제: 도로와신호등 (실버3)
////알고리즘 : 구현
//
////다음 문제의 조건을 잘못읽어서 푸는데 오래걸렸다
////"도로의 시작은 0미터이고  트럭이 도로에 진입했을 때, 모든 신호등의 색상은 빨간색이고, 사이클이 막 시작한 상태이다."
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct Signal {
//	int D, R, G;
//};
//int N, L;
//int pos,t;
//vector<Signal> signal;
//
//int main() {
//	cin >> N >> L;
//	for (int i = 0; i < N; i++) {
//		int d, r, g;
//		cin >> d >> r >> g;
//		signal.push_back({ d,r,g });
//	}
//
//	while (pos!=L) {
//		t++;pos++;
//		if (!signal.empty()) {
//			Signal curSignal = signal.front();
//			//현재 이동한위치가 신호등위치라면
//			if (pos == curSignal.D) {
//				
//				int candi = t % (curSignal.R + curSignal.G);
//				
//				//빨간불이라면
//				if ((candi  < curSignal.R) ) {
//					int suspend = curSignal.R - candi;
//					//대기
//					t+=suspend;
//					
//				}
//				//신호등을 지났으면 지난 신호등 삭제
//				signal.erase(signal.begin() + 0);
//
//			}
//		}
//	}
//	cout << t;
//}
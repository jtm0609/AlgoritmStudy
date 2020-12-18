////문제: 택배
////알고리즘: 그리디
////설계참조: https://maivve.tistory.com/36
////코드참조: https://keoroo.tistory.com/12
////코드 설계부분이 너무어려움
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct Town {
//	int from, to, cost;
//};
////목적지, 출발지 순으로 정렬
//int cmp(Town a, Town b) {
//	if (a.to == b.to) {
//		return a.from < b.from;
//	}
//	return a.to < b.to;
//}
//int box[2001]; //그 구간에서 트럭이 들고있는 상자의개수
//Town town[10001]; //박스정보(보내는마을번호, 받는마을번호, 보내는박스 개수)
//int main() {
//	int ans = 0;
//	int n, c, m;
//	cin >> n >> c >> m;
//
//	for (int i = 0; i < m; i++)
//		cin >> town[i].from >> town[i].to >> town[i].cost;
//
//	sort(town, town + m, cmp);
//	for (int i = 0; i < m; i++) {
//		
//		Town now = town[i];//이번에 볼 입력값
//		int already = 0; //주어진 구간에서 최대상자수
//
//
//			for (int i = now.from; i < now.to; i++) {
//				already = max(already, box[i]);
//			}
//			//상자의 최대갯수를 넘길수 있기때문에
//			//지금 보고있는 상자의 개수와 남은용량중 작은거을 선택
//			int add = min(now.cost, c - already);
//
//			//구간에추가
//			for (int i = now.from; i < now.to; i++) {
//				box[i] += add;
//			}
//			ans += add; //추가한 만큼 답에 더해줌
//		
//	}
//	cout << ans;
//}
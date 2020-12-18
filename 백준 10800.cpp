////문제: 컬러볼(골드3)
////알고리즘: 정렬
////참고: https://plzfdaylife.tistory.com/153 +호석님 설명
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int MN = 200000 + 1;
//int n, sum, colorSum[MN], ret[MN];
//struct Ball {
//	int c, s, idx;
//}
//ball[MN];
//bool cmp(Ball b1, Ball b2) {
//	return b1.s < b2.s;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> ball[i].c >> ball[i].s;
//		ball[i].idx = i;
//	}
//	//사이즈가 작은 순서로 정렬
//	sort(ball, ball + n, cmp);
//
//	for (int i = 0, j = 0; i < n; i++) {
//		//현재 공보다 작은 공들의 크기합 구하기
//		for (; ball[i].s > ball[j].s; j++) {
//			sum += ball[j].s;
//			//색깔별로 공크기 누적 합하기
//			colorSum[ball[j].c] += ball[j].s;
//		}
//		//현재공보다 작은공들 누적 크기합- 현재공과 같은색깔 누적합
//		ret[ball[i].idx] = sum - colorSum[ball[i].c];
//	}
//
//	for (int i = 0; i < n; i++) {
//		//printf("%d\n", ret[i]);
//		cout << ret[i]<<"\n";
//	}
//
//}
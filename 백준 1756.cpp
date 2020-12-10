////문제: 피자굽기 (골드5)
////알고리즘 : 이분탐색
////참고: https://slllju.tistory.com/15
////n,m이 각각 30만(10^5)이므로 이중 for문을 돌리면 (10^10)으로 시간초과가 난다
////따라서 이분탐색 or DP알고리즘을 사용해서 풀어야한다.
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define maxn 3000001
//#define inf 1000000009
//int a[maxn]; //오븐
//int main() {
//	int n, m;
//	a[0] = inf;
//	cin >> n >> m;
//
//	//문제특성상 내림차순으로 깊이가 조절될수가있다는점을 알수있다.
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		a[i] = min(a[i - 1], a[i]);
//	}
//
//	int dough = 0; int old = 0; int pos = n + 1;
//	while (m--) {
//		old = dough;
//		cin >> dough;
//
//		//도우가 꽉찼다면
//		if (!pos) continue;
//
//		//이전 반죽보다 작거나 같은 반죽이면 바로위에 올린다.
//		if (dough <= old) {
//			pos--;
//			continue;
//		}
//		//그렇지않다면 이분탐색으로 알맞은 위치를 찾는다.
//		else {
//			int low = 0; int mid; int high = pos - 1;
//			while (low <= high) {
//				mid = (low + high) / 2;
//				if (dough <= a[mid]) {
//					low = mid + 1;
//					pos = mid;
//				}
//				else high = mid - 1;
//			}
//		}
//	}
//	cout << pos;
//}
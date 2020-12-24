////문제: 수들의 합2
////알고리즘: 투포인터
////O(n^2)으로 풀면 시간초과가남: https://medium.com/hyeon-hwang/%EB%B0%B1%EC%A4%80-2003-%EC%88%98%EB%93%A4%EC%9D%98-%ED%95%A92-18728473399
////O(n)으로 풀어야함
////참조:https://sihyungyou.github.io/baekjoon-2003/
////
//#include<iostream>
//using namespace std;
//int n, m;
//int r, h; //투포인터
//int arr[10000 + 1];
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int ans = 0;
//	int sum = 0;
//	while (1) {
//		
//		if (sum >= m) sum -= arr[r++];			
//		else if (h == n) break;
//		else sum += arr[h++];
//		
//		if (sum == m) ans++;
//
//	}
//	cout << ans;
//}
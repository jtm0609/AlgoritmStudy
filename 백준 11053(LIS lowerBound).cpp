////문제: 가장 긴 증가하는 부분 수열
////시간복잡도: O(NlogN)
////알고리즘 : LIS + lowerBound
////푼날짜: 2020-12-23
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <deque>
//
//using namespace std;
//
//int n;
//int arr[40001];
//int lis[40001];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	int j = 0;
//	lis[0] = arr[0]; // lis 배열의 맨 첫번째 값은 arr[0]으로 초기화
//	int i = 1;
//
//	// arr의 두번째부터 마지막까지 하나씩 lis와 비교하면서 넣어준다.
//	while (i < n) {
//		// lis 배열의 맨 뒤의 값보다 arr[i]가 더 크면 그것을 lis 배열 맨 뒤에 넣어준다.
//		if (lis[j] < arr[i]) {
//			lis[j + 1] = arr[i];
//			j += 1;
//		}
//		// arr[i]값이 더 작으면, arr[i]의 값이 lis 배열 중 어느 곳에 들어올지 이분탐색한다.
//		else {
//			// 0부터 j까지 탐색하면서 arr[i]가 들어갈 수 있는 위치를 찾아서 idx에 반환
//			int idx = lower_bound(lis, lis + j, arr[i]) - lis;
//			lis[idx] = arr[i];
//		}
//		i += 1;
//	}
//
//	cout << j + 1;
//
//
//	return 0;
//}
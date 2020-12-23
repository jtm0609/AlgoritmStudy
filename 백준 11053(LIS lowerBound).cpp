////����: ���� �� �����ϴ� �κ� ����
////�ð����⵵: O(NlogN)
////�˰��� : LIS + lowerBound
////Ǭ��¥: 2020-12-23
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
//	lis[0] = arr[0]; // lis �迭�� �� ù��° ���� arr[0]���� �ʱ�ȭ
//	int i = 1;
//
//	// arr�� �ι�°���� ���������� �ϳ��� lis�� ���ϸ鼭 �־��ش�.
//	while (i < n) {
//		// lis �迭�� �� ���� ������ arr[i]�� �� ũ�� �װ��� lis �迭 �� �ڿ� �־��ش�.
//		if (lis[j] < arr[i]) {
//			lis[j + 1] = arr[i];
//			j += 1;
//		}
//		// arr[i]���� �� ������, arr[i]�� ���� lis �迭 �� ��� ���� ������ �̺�Ž���Ѵ�.
//		else {
//			// 0���� j���� Ž���ϸ鼭 arr[i]�� �� �� �ִ� ��ġ�� ã�Ƽ� idx�� ��ȯ
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
////����: ����ī��
////�˰���: �̺�Ž��
////Ǭ��¥: 2020-12-22

//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n, m;
//int arr[500000 + 1];
//vector<int> ans;
//
//bool binarySearch(int find) {
//	int left = 0, right = n - 1, mid;
//	int res = -1;
//	while (left <= right) {
//
//		mid = (left + right) / 2;
//		if (arr[mid] < find) left = mid + 1;
//		else if (arr[mid] > find) right = mid - 1;
//		else {
//			res = mid;
//			return true;
//		}
//
//	}
//	return false;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	sort(arr, arr + n);
//
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int find;
//		cin >> find;
//		//if (binary_search(arr,arr+n,find)) ans.push_back(1); //���������� STL���ᵵ�ǰ� �����Լ��� �����ص��ȴ�.
//		if(binarySearch(find)) ans.push_back(1);
//		else ans.push_back(0);
//	}
//
//	for (int i = 0; i < ans.size(); i++) {
//		cout << ans[i] << " ";
//	}
//}
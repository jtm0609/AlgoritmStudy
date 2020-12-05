////문제: 나무 조각 실버5
////알고리즘 : 구현
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//	}
//
//
//	while (1) {
//		bool exit_flag = true;
//		for (int i = 0; i < 4; i++) {
//			if (arr[i] > arr[i + 1]) {
//				exit_flag = false;
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				for (int i = 0; i < 5; i++) {
//					cout << arr[i] << " ";
//				}
//				cout << endl;
//			}
//		}
//
//	
//
//		if (exit_flag) break;
//	}
//	return 0;
//}
////선택정렬
////주어진 데이터에서 가장작은 데이터를 찾아서 정렬
//#include<iostream>
//using namespace std;
//
//
//void selectSort(int arr[]) {
//	int idx=0;
//	for (int i = 0; i < 8; i++) {
//		int min = arr[i];		
//		for (int j = i+1; j < 8; j++) {
//			if (min > arr[j]) {
//				min = arr[j];
//				idx = j;
//			}
//		}
//		int temp = arr[i];
//		arr[i] = arr[idx];
//		arr[idx] = temp;
//	}
//}
//
//int main() {
//	int arr[8] = { 8,6,5,3,1,2,7,4 };
//	selectSort(arr);
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i]<<" ";
//	}
//}